
#include "ui_CalSRateDlg.h"

#include "CalSRateCtl.h"
#include "Util.h"
#include "MainApp.h"
#include "ConfigCtl.h"
#include "DFName.h"
#include "KVParams.h"
#include "HelpButDialog.h"

#include <QFileDialog>
#include <QMessageBox>


/* ---------------------------------------------------------------- */
/* ctor/dtor ------------------------------------------------------ */
/* ---------------------------------------------------------------- */

CalSRateCtl::CalSRateCtl( QObject *parent )
    :   QObject( parent ), thd(0)
{
    dlg = new HelpButDialog( "CalSRate_Help" );

    calUI = new Ui::CalSRateDlg;
    calUI->setupUi( dlg );
    calUI->allRB->setChecked( true );
    calUI->cancelBut->setEnabled( false );
    ConnectUI( calUI->browseBut, SIGNAL(clicked()), this, SLOT(browse()) );
    ConnectUI( calUI->goBut, SIGNAL(clicked()), this, SLOT(go()) );
    ConnectUI( calUI->applyBut, SIGNAL(clicked()), this, SLOT(apply()) );

    dlg->exec();
}


CalSRateCtl::~CalSRateCtl()
{
    if( thd ) {

        QMetaObject::invokeMethod(
            thd->worker, "cancel",
            Qt::DirectConnection );

        delete thd;
        thd = 0;
    }

    if( calUI ) {
        delete calUI;
        calUI = 0;
    }

    if( dlg ) {
        delete dlg;
        dlg = 0;
    }
}

/* ---------------------------------------------------------------- */
/* Public slots --------------------------------------------------- */
/* ---------------------------------------------------------------- */

void CalSRateCtl::percent( int pct )
{
    write( QString("done %1%").arg( pct ) );
}


void CalSRateCtl::finished()
{
    if( thd ) {
        delete thd;
        thd = 0;
    }

    calUI->outTE->clear();

    write( "These are the old rates and the new measurement results:" );
    write( "(A text message indicates an unsuccessful measurement)\n" );

    for( int is = 0, ns = vIM.size(); is < ns; ++is ) {

        const CalSRStream   &S = vIM[is];

        if( !S.err.isEmpty() ) {
            write( QString(
            "    IM%1  %2  :  %3" )
            .arg( S.ip )
            .arg( S.srate, 0, 'f', 6 )
            .arg( S.err ) );
        }
        else if( S.av == 0 ) {
            write( QString(
            "    IM%1  %2  :  canceled" )
            .arg( S.ip )
            .arg( S.srate, 0, 'f', 6 ) );
        }
        else {
            write( QString(
            "    IM%1  %2  :  %3 +/- %4" )
            .arg( S.ip )
            .arg( S.srate, 0, 'f', 6 )
            .arg( S.av, 0, 'f', 6 )
            .arg( S.se, 0, 'f', 6 ) );
        }
    }

    if( vNI.size() ) {

        CalSRStream &S = vNI[0];

        if( !S.err.isEmpty() ) {
            write( QString(
            "    NI  %1  :  %2" )
            .arg( S.srate, 0, 'f', 6 )
            .arg( S.err ) );
        }
        else if( S.av == 0 ) {
            write( QString(
            "    NI  %1  :  canceled" )
            .arg( S.srate, 0, 'f', 6 ) );
        }
        else {
            write( QString(
            "    NI  %1  :  %2 +/- %3" )
            .arg( S.srate, 0, 'f', 6 )
            .arg( S.av, 0, 'f', 6 )
            .arg( S.se, 0, 'f', 6 ) );
        }
    }

    write( "\nUnsuccessful measurements will not be applied." );

    calUI->specifyGB->setEnabled( true );
    calUI->cancelBut->setEnabled( false );
    calUI->applyGB->setEnabled( true );
}

/* ---------------------------------------------------------------- */
/* Private slots -------------------------------------------------- */
/* ---------------------------------------------------------------- */

void CalSRateCtl::browse()
{
    QString f = QFileDialog::getOpenFileName(
                    dlg,
                    "Select binary output file",
                    mainApp()->dataDir(),
                    "BIN Files (*.ap.bin *.nidq.bin)" );

    if( f.isEmpty() )
        return;

    calUI->fileLE->setText( f );
}


void CalSRateCtl::go()
{
    QString f;

    vIM.clear();
    vNI.clear();
    calUI->outTE->clear();

// --------------------
// Verify selected file
// --------------------

    if( !verifySelection( f ) )
        return;

// ----------------
// Set up job lists
// ----------------

    runTag = DFRunTag( f );

    if( calUI->oneRB->isChecked() )
        setJobsOne( f );
    else
        setJobsAll( f );

// -------
// Process
// -------

    calUI->specifyGB->setEnabled( false );
    calUI->cancelBut->setEnabled( true );
    calUI->applyGB->setEnabled( false );

    thd = new CalSRThread( runTag, vIM, vNI );
    ConnectUI( thd->worker, SIGNAL(percent(int)), this, SLOT(percent(int)) );
    ConnectUI( thd->worker, SIGNAL(finished()), this, SLOT(finished()) );
    Connect( calUI->cancelBut, SIGNAL(clicked()), thd->worker, SLOT(cancel()), Qt::DirectConnection );

    thd->startRun();
}


void CalSRateCtl::apply()
{
// -----------------
// Anything checked?
// -----------------

    bool    isGChk = calUI->globalChk->isChecked(),
            isFChk = calUI->fileChk->isChecked(),
            isRslt = false;

    if( !(isGChk || isFChk) ) {

        QMessageBox::information(
            dlg,
            "No Update Targets",
            "Use checkboxes to specify how results are applied." );
        return;
    }

// ----
// Imec
// ----

    DAQ::Params             p;
    ConfigCtl               *cfg    = mainApp()->cfgCtl();
    CimCfg::ImProbeTable    &prbTab = cfg->prbTab;

    p.loadSettings();
    prbTab.loadSRateTable();

    for( int is = 0, ns = vIM.size(); is < ns; ++is ) {

        const CalSRStream   &S = vIM[is];

        if( S.av > 0 ) {

            QString     name = runTag.filename( S.ip, "ap.meta" );
            KVParams    kvp;
            quint64     hssn;

            if( !kvp.fromMetaFile( name ) )
                continue;

            hssn = kvp["imDatHs_sn"].toULongLong();

            if( isGChk ) {

                // Update working srate
                //
                // Update the current AttrEach records that
                // correspond to this HSSN.

                for( int ip = 0, np = prbTab.nLogProbes(); ip < np; ++ip ) {

                    if( prbTab.get_iProbe( ip ).hssn == hssn )
                        p.im.each[ip].srate = S.av;
                }

                // Update database
                prbTab.set_HSSN_SRate( hssn, S.av );
            }

            if( isFChk ) {

                // AP

                kvp["imSampRate"] = S.av;

                kvp["fileTimeSecs"] =
                    kvp["fileSizeBytes"].toLongLong()
                    / (2 * kvp["nSavedChans"].toInt())
                    / S.av;

                kvp.toMetaFile( name );

                // LFP ?

                int type = -3;
                if( kvp.contains( "imDatPrb_type" ) )
                    type = kvp["imDatPrb_type"].toInt();

                IMROTbl*    R = IMROTbl::alloc( type );

                if( R->nLF() ) {

                    name = runTag.filename( S.ip, "lf.meta" );

                    if( kvp.fromMetaFile( name ) ) {

                        kvp["imSampRate"] = S.av / 12.0;

                        kvp["fileTimeSecs"] =
                            kvp["fileSizeBytes"].toLongLong()
                            / kvp["nSavedChans"].toInt()
                            * 6
                            / S.av;

                        kvp.toMetaFile( name );
                    }
                }

                delete R;
            }

            isRslt = true;
        }
    }

// ----
// Nidq
// ----

    if( vNI.size() ) {

        const CalSRStream   &S = vNI[0];

        if( S.av > 0 ) {

            QString     name = runTag.filename( -1, "meta" );
            KVParams    kvp;

            kvp.fromMetaFile( name );

            if( isGChk ) {
                p.ni.srate = S.av;
                p.ni.setSRate( kvp["niClockSource"].toString(), S.av );
                p.ni.saveSRateTable();
            }

            if( isFChk ) {

                kvp["niSampRate"] = S.av;

                kvp["fileTimeSecs"] =
                    kvp["fileSizeBytes"].toLongLong()
                    / (2 * kvp["nSavedChans"].toInt())
                    / S.av;

                kvp.toMetaFile( name );
            }

            isRslt = true;
        }
    }

// -------------
// Apply globals
// -------------

    if( !isRslt ) {

        QMessageBox::information(
            dlg,
            "No Valid Results",
            "Nothing done: No new results were calculated." );
    }
    else if( isGChk ) {
        cfg->setParams( p, true );
        prbTab.saveSRateTable();
    }
}

/* ---------------------------------------------------------------- */
/* Private -------------------------------------------------------- */
/* ---------------------------------------------------------------- */

void CalSRateCtl::write( const QString &s )
{
    QTextEdit   *te = calUI->outTE;

    te->append( s );
    te->moveCursor( QTextCursor::End );
    te->moveCursor( QTextCursor::StartOfLine );
}


// Sync keys "syncSourcePeriod" and others added in version 20170903.
//
bool CalSRateCtl::verifySelection( QString &f )
{
    QString err;
    bool    ok;

    f = calUI->fileLE->text().trimmed();

    ok = DFName::isValidInputFile( f, {"syncSourcePeriod"}, &err );

    if( !ok ) {
        write( "Selected file error:" );
        write( err );
    }

    return ok;
}


void CalSRateCtl::setJobsOne( QString &f )
{
    int ip, type = DFName::typeAndIP( ip, f, 0 );

    (type == 0 ? vIM : vNI).push_back( CalSRStream( ip ) );
}


void CalSRateCtl::setJobsAll( QString &f )
{
    KVParams    kvp;

    kvp.fromMetaFile( DFName::forceMetaSuffix( f ) );

    KVParams::const_iterator    it = kvp.find( "typeImEnabled" );

    if( it != kvp.end() ) {

        for( int ip = 0, np = it.value().toInt(); ip < np; ++ip )
            vIM.push_back( CalSRStream( ip ) );

        if( kvp["typeNiEnabled"].toInt() > 0 )
            vNI.push_back( CalSRStream( -1 ) );
    }
    else {

        QString sTypes =  kvp["typeEnabled"].toString();

        if( sTypes.contains( "imec" ) )
            vIM.push_back( CalSRStream( 0 ) );

        if( sTypes.contains( "nidq" ) )
            vNI.push_back( CalSRStream( -1 ) );
    }
}


