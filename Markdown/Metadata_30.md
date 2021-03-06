# Metafile Tags

* Typical right-hand-side values are shown for each tag illustrating whether
its data are integers, floating-point values or text strings.

* Inapplicable values are usually blank, like so: `userNotes=`

* Inapplicable tags may be absent.

## Common to All Files

```
appVersion=20201024
```

```
fileCreateTime=2020-08-29T00:27:54
```

These are the local date and time on the recording machine.

```
fileName=C:/SGL_DATA/qqq1_g0_t0.nidq.bin
```

This is the original path to the binary file paired with this metadata file.

```
fileSHA1=B209BBB956A9F6371625C118D651DBE9AED4051D
```

This is a checksum calculated for the binary data. Use menu item
`Tools::Verify SHA1` to detect if the binary data have been altered since
the file was first recorded.

```
fileSizeBytes=10144818
```

This should match what you see when you right-click on the binary file in
the 'Windows File Explorer' and select 'Properties'. This is the 'Size'
value, **not** the 'Size on disk' value.

```
fileTimeSecs=1.0
```

This is the span of the file data in seconds and is calculated as:

```
    fileTimeSecs = fileSizeBytes / xxSampleRate / nSavedChans / 2,
    where, xxSampleRate is the niSampleRate or imSampleRate
    recorded in the same metafile.
```

```
firstSample=779283
```

All acquired samples are assigned an index number; the first acquired
during the run is sample 0. This value is the index number of the first
sample recorded in this file.

```
gateMode=Immediate
```

Possible values are {Immediate, TCP}.

```
nDataDirs=1
```

The number of data directories holding the data from this run. If greater
than one, then the files for an imec probe with logical index `iProbe`
are written into the data directory whose index is:
`iProbe modulo nDataDirs`.

```
nSavedChans=257
```

The number of channels being saved to disk.

```
rmt_USERTYPE=USERDEFINED
```

When SpikeGLX is set as a Gate/Trigger server it can receive remote
commands to start and stop gate and trigger intervals. It can also receive
remote commands to insert custom metadata into saved files. Such tags are
automatically prepended with 'rmt_' to distinguish them from built-in tags.

```
snsSaveChanSubset=2,4,8,12:150
snsSaveChanSubset=all
```

Two examples are shown above for `snsSaveChanSubset`. If any channels
are NOT being saved the value is a printer-like list of channels that ARE
saved. If ALL are saved, the value is 'all'.

```
syncSourceIdx=0
```

Type of pulser source {0=None, 1=External, 2=NI, 3+=IM}.

```
syncSourcePeriod=1.0
```

Measured period of the shared pulse train in seconds.

```
trigMode=Timed
```

Possible values are {Immediate, Timed, TTL, Spike, TCP}.

```
typeImEnabled=1
```

Count of imec probes enabled for this run.

```
typeNiEnabled=1
```

Whether nidq stream was enabled for this run {1=yes, 0=no}.

```
typeThis=nidq
```

Which stream type is described in this file.

```
userNotes=Line1\nLine2...
```

Blank lines in your text are each replaced with 'backslash-n'. The `userNotes`
tag is thereby a single line in metafiles.

```
~snsShankMap=(1,2,96)(0:0:0:1)(0:1:0:1)(0:0:1:1)(0:1:1:1)(0:0:2:1)(0:1:2:1)(0:0:3:1)(0:1:3:1)(0:0:4:1)(0:1:4:1)(0:0:5:1)(0:1:5:1)(0:0:6:1)(0:1:6:1)(0:0:7:1)(0:1:7:1)(0:0:8:1)(0:1:8:1)(0:0:9:1)(0:1:9:1)(0:0:10:1)(0:1:10:1)(0:0:11:1)(0:1:11:1)(0:0:12:1)(0:1:12:1)(0:0:13:1)(0:1:13:1)(0:0:14:1)(0:1:14:1)(0:0:15:1)(0:1:15:1)(0:0:16:1)(0:1:16:1)(0:0:17:1)(0:1:17:1)(0:0:18:1)(0:1:18:1)(0:0:19:1)(0:1:19:1)(0:0:20:1)(0:1:20:1)(0:0:21:1)(0:1:21:1)(0:0:22:1)(0:1:22:1)(0:0:23:1)(0:1:23:1)(0:0:24:1)(0:1:24:1)(0:0:25:1)(0:1:25:1)(0:0:26:1)(0:1:26:1)(0:0:27:1)(0:1:27:1)(0:0:28:1)(0:1:28:1)(0:0:29:1)(0:1:29:1)(0:0:30:1)(0:1:30:1)(0:0:31:1)(0:1:31:1)(0:0:32:1)(0:1:32:1)(0:0:33:1)(0:1:33:1)(0:0:34:1)(0:1:34:1)(0:0:35:1)(0:1:35:1)(0:0:36:1)(0:1:36:1)(0:0:37:1)(0:1:37:1)(0:0:38:1)(0:1:38:1)(0:0:39:1)(0:1:39:1)(0:0:40:1)(0:1:40:1)(0:0:41:1)(0:1:41:1)(0:0:42:1)(0:1:42:1)(0:0:43:1)(0:1:43:1)(0:0:44:1)(0:1:44:1)(0:0:45:1)(0:1:45:1)(0:0:46:1)(0:1:46:1)(0:0:47:1)(0:1:47:1)(0:0:48:1)(0:1:48:1)(0:0:49:1)(0:1:49:1)(0:0:50:1)(0:1:50:1)(0:0:51:1)(0:1:51:1)(0:0:52:1)(0:1:52:1)(0:0:53:1)(0:1:53:1)(0:0:54:1)(0:1:54:1)(0:0:55:1)(0:1:55:1)(0:0:56:1)(0:1:56:1)(0:0:57:1)(0:1:57:1)(0:0:58:1)(0:1:58:1)(0:0:59:1)(0:1:59:1)(0:0:60:1)(0:1:60:1)(0:0:61:1)(0:1:61:1)(0:0:62:1)(0:1:62:1)(0:0:63:1)(0:1:63:1)(0:0:64:1)(0:1:64:1)(0:0:65:1)(0:1:65:1)(0:0:66:1)(0:1:66:1)(0:0:67:1)(0:1:67:1)(0:0:68:1)(0:1:68:1)(0:0:69:1)(0:1:69:1)(0:0:70:1)(0:1:70:1)(0:0:71:1)(0:1:71:1)(0:0:72:1)(0:1:72:1)(0:0:73:1)(0:1:73:1)(0:0:74:1)(0:1:74:1)(0:0:75:1)(0:1:75:1)(0:0:76:1)(0:1:76:1)(0:0:77:1)(0:1:77:1)(0:0:78:1)(0:1:78:1)(0:0:79:1)(0:1:79:1)(0:0:80:1)(0:1:80:1)(0:0:81:1)(0:1:81:1)(0:0:82:1)(0:1:82:1)(0:0:83:1)(0:1:83:1)(0:0:84:1)(0:1:84:1)(0:0:85:1)(0:1:85:1)(0:0:86:1)(0:1:86:1)(0:0:87:1)(0:1:87:1)(0:0:88:1)(0:1:88:1)(0:0:89:1)(0:1:89:1)(0:0:90:1)(0:1:90:1)(0:0:91:1)(0:1:91:1)(0:0:92:1)(0:1:92:1)(0:0:93:1)(0:1:93:1)(0:0:94:1)(0:1:94:1)(0:0:95:1)(0:1:95:1)
```

The Shank Map describes how electrodes are arranged on the probe. The first
() entry is a header. Here, (1,2,96) indicates the probe has up to 1 shank
with up to 2 columns and 96 rows. Note that these are maximum values that
define a grid, but not all column and row combinations need be occupied.
Each following electrode entry has four values:

1. zero-based shank #,

2. zero-based col #,

3. zero-based row #,

4. 0/1 flag indicating if the electrode should be drawn in the
ShankView window, and if it should be considered in spatial average \<S\>
calculations.

>Note: There are electrode entries only for saved channels.

## If Using Timed Trigger

```
trgTimIsHInf=false
```

Is the duration of the high cycle infinite (latched high)? If not `trgTimTH`
sets the duration.

```
trgTimIsNInf=false
```

Is the count of high cycles infinite? If not, `trgTimNH` sets the count.

>Note that infinite cycle counts or durations are terminated when either
the current gate goes low or the run is stopped manually.

```
trgTimNH=1
```

This is the number of high-low cycles per gate window, unless overridden by
`trgTimIsNInf`.

```
trgTimTH=1.0
```

This is the number of seconds of data to write, unless overridden by
`trgTimIsHInf`.

```
trgTimTL=1.0
```

This is the number of seconds to wait between write-phases.

```
trgTimTL0=10.0
```

This is the number of seconds to wait from the start of a gate window,
until starting the first high-phase (write-phase).

## If Using TTL Trigger

```
trgTTLAIChan=192
```

```
trgTTLBit=0
```

```
trgTTLInarow=5
```

This is the count in consecutive samples that must also be high to confirm
that a rising edge is real rather than noise. This is sometimes referred to
as an "anti-bounce" feature.

```
trgTTLIsAnalog=true
```

If true, `trgTTLAIChan` specifies which analog channel in the stream will
be tested for rising edges. If false, `trgTTLBit` specifies which bit of
the 16-bit digital data words will be tested. The digital data words are
the last words in each timepoint. The bits within are arranged like this:

[analog0][analog1]...[analogN][bit15..bit0][bit31..bit16]...[digitalN].

```
trgTTLIsNInf=true
```

Is the count of high cycles infinite? If not, `trgTTLNH` sets the count.

>Note that infinite cycle counts or durations are terminated when either
the current gate goes low or the run is stopped manually.

```
trgTTLMarginS=1.0
```

This is the number of seconds to add both before and after the peri-event
interval to provide expanded context.

```
trgTTLMode=0
```

Once a rising edge is detected, the mode controls how the length of the
high-phase (file-writing phase) is determined.

Possible values: {0=Latch high, 1=Timed high, 2=Follow TTL}.

```
trgTTLNH=10
```

This is the count of writing cycles to execute per gate window, unless
overridden by `trgTTLIsNInf`.

```
trgTTLRefractS=0.5
```

This is the minimum number of seconds to wait since the last rising-edge
until the rising-edge detector may be re-armed.

```
trgTTLStream=nidq
```

```
trgTTLTH=0.5
```

This is the programmed high duration if `trgTTLMode=1`.

```
trgTTLThresh=2.0
```

This is the voltage threshold used for testing analog-type channels.

## If Using Spike Trigger

```
trgSpikeAIChan=4
```

```
trgSpikeInarow=5
```

This is the count in consecutive samples that must also be low to confirm
that a falling edge is a real spike rather than noise.

```
trgSpikeIsNInf=false
```

Is the count of spikes to detect infinite? If not, `trgSpikeNS` sets
the count.

>Note that infinite spike counts are terminated when either the current
gate goes low or the run is stopped manually.

```
trgSpikeNS=10
```

Maximum number of spikes to detect (files to write) per gate window.

```
trgSpikePeriEvtS=1.0
```

This is the number of seconds to add both before and after the peri-event
interval to provide expanded context.

```
trgSpikeRefractS=0.5
```

This is the minimum number of seconds to wait since the last spike until the
falling-edge detector may be re-armed.

```
trgSpikeStream=nidq
```

```
trgSpikeThresh=-100e-6
```

This trigger defines a spike as a negative-going threshold crossing.

## NIDQ

```
acqMnMaXaDw=192,64,0,1
```

This is the count of channels, of each type, in each timepoint,
at acquisition time.

```
niAiRangeMax=-2.5
```

Convert from 16-bit analog values (i) to voltages (V) as follows:

V = i * Vmax / Imax / gain.

For nidq data:

* Imax = 32768
* Vmax = `niAiRangeMax`
* gain = `niMNGain` or `niMAGain`, accordingly.

```
niAiRangeMin=2.5
```

```
niAiTermination=Default
```

```
niClockSource=Whisper : 25000
```

Name of the device generating the sample clock and its programmed rate.

```
niClockLine1=PFI2
```

```
niDev1=Dev1
```

```
niDev1ProductName=FakeDAQ
```

```
niMAChans1=6:7
```

```
niMAGain=1.0
```

```
niMNChans1=0:5
```

```
niMNGain=200.0
```

```
niMuxFactor=32
```

```
niSampRate=25000
```

```
niStartEnable=true
```

```
niStartLine=Dev1/port0/line0
```

```
niXAChans1=
```

```
niXDBytes1=1
```

This is the number of bytes needed to hold the lines specified by
niXDChans1. The lines acquired from the second device (if used)
start at offset: 8 * niXDBytes1.

```
niXDChans1=1
```

This is a printer-like list of NI-DAQ line indices. For example, if your
NI device was named 'Fred' and if niXDChans1=2:3, we would acquire from
lines {Fred/line2, Fred/line3}.

```
snsMnMaXaDw=192,64,0,1
```

This is the count of channels, of each type, in each timepoint,
as stored in the binary file.

```
syncNiChan=0
```

The bit or channel number (in the acquired stream).

```
syncNiChanType=0
```

Values are {0=Digital bit, 1=Analog channel}.

```
syncNiThresh=3.0
```

The crossing threshold (V) for an analog channel.

```
~snsChanMap=(6,2,32,0,1)(MN0C0;0:0)(MN0C1;1:1)(MN0C2;2:2)(MN0C3;3:3)(MN0C4;4:4)(MN0C5;5:5)(MN0C6;6:6)(MN0C7;7:7)(MN0C8;8:8)(MN0C9;9:9)(MN0C10;10:10)(MN0C11;11:11)(MN0C12;12:12)(MN0C13;13:13)(MN0C14;14:14)(MN0C15;15:15)(MN0C16;16:16)(MN0C17;17:17)(MN0C18;18:18)(MN0C19;19:19)(MN0C20;20:20)(MN0C21;21:21)(MN0C22;22:22)(MN0C23;23:23)(MN0C24;24:24)(MN0C25;25:25)(MN0C26;26:26)(MN0C27;27:27)(MN0C28;28:28)(MN0C29;29:29)(MN0C30;30:30)(MN0C31;31:31)(MN1C0;32:32)(MN1C1;33:33)(MN1C2;34:34)(MN1C3;35:35)(MN1C4;36:36)(MN1C5;37:37)(MN1C6;38:38)(MN1C7;39:39)(MN1C8;40:40)(MN1C9;41:41)(MN1C10;42:42)(MN1C11;43:43)(MN1C12;44:44)(MN1C13;45:45)(MN1C14;46:46)(MN1C15;47:47)(MN1C16;48:48)(MN1C17;49:49)(MN1C18;50:50)(MN1C19;51:51)(MN1C20;52:52)(MN1C21;53:53)(MN1C22;54:54)(MN1C23;55:55)(MN1C24;56:56)(MN1C25;57:57)(MN1C26;58:58)(MN1C27;59:59)(MN1C28;60:60)(MN1C29;61:61)(MN1C30;62:62)(MN1C31;63:63)(MN2C0;64:64)(MN2C1;65:65)(MN2C2;66:66)(MN2C3;67:67)(MN2C4;68:68)(MN2C5;69:69)(MN2C6;70:70)(MN2C7;71:71)(MN2C8;72:72)(MN2C9;73:73)(MN2C10;74:74)(MN2C11;75:75)(MN2C12;76:76)(MN2C13;77:77)(MN2C14;78:78)(MN2C15;79:79)(MN2C16;80:80)(MN2C17;81:81)(MN2C18;82:82)(MN2C19;83:83)(MN2C20;84:84)(MN2C21;85:85)(MN2C22;86:86)(MN2C23;87:87)(MN2C24;88:88)(MN2C25;89:89)(MN2C26;90:90)(MN2C27;91:91)(MN2C28;92:92)(MN2C29;93:93)(MN2C30;94:94)(MN2C31;95:95)(MN3C0;96:96)(MN3C1;97:97)(MN3C2;98:98)(MN3C3;99:99)(MN3C4;100:100)(MN3C5;101:101)(MN3C6;102:102)(MN3C7;103:103)(MN3C8;104:104)(MN3C9;105:105)(MN3C10;106:106)(MN3C11;107:107)(MN3C12;108:108)(MN3C13;109:109)(MN3C14;110:110)(MN3C15;111:111)(MN3C16;112:112)(MN3C17;113:113)(MN3C18;114:114)(MN3C19;115:115)(MN3C20;116:116)(MN3C21;117:117)(MN3C22;118:118)(MN3C23;119:119)(MN3C24;120:120)(MN3C25;121:121)(MN3C26;122:122)(MN3C27;123:123)(MN3C28;124:124)(MN3C29;125:125)(MN3C30;126:126)(MN3C31;127:127)(MN4C0;128:128)(MN4C1;129:129)(MN4C2;130:130)(MN4C3;131:131)(MN4C4;132:132)(MN4C5;133:133)(MN4C6;134:134)(MN4C7;135:135)(MN4C8;136:136)(MN4C9;137:137)(MN4C10;138:138)(MN4C11;139:139)(MN4C12;140:140)(MN4C13;141:141)(MN4C14;142:142)(MN4C15;143:143)(MN4C16;144:144)(MN4C17;145:145)(MN4C18;146:146)(MN4C19;147:147)(MN4C20;148:148)(MN4C21;149:149)(MN4C22;150:150)(MN4C23;151:151)(MN4C24;152:152)(MN4C25;153:153)(MN4C26;154:154)(MN4C27;155:155)(MN4C28;156:156)(MN4C29;157:157)(MN4C30;158:158)(MN4C31;159:159)(MN5C0;160:160)(MN5C1;161:161)(MN5C2;162:162)(MN5C3;163:163)(MN5C4;164:164)(MN5C5;165:165)(MN5C6;166:166)(MN5C7;167:167)(MN5C8;168:168)(MN5C9;169:169)(MN5C10;170:170)(MN5C11;171:171)(MN5C12;172:172)(MN5C13;173:173)(MN5C14;174:174)(MN5C15;175:175)(MN5C16;176:176)(MN5C17;177:177)(MN5C18;178:178)(MN5C19;179:179)(MN5C20;180:180)(MN5C21;181:181)(MN5C22;182:182)(MN5C23;183:183)(MN5C24;184:184)(MN5C25;185:185)(MN5C26;186:186)(MN5C27;187:187)(MN5C28;188:188)(MN5C29;189:189)(MN5C30;190:190)(MN5C31;191:191)(MA0C0;192:192)(MA0C1;193:193)(MA0C2;194:194)(MA0C3;195:195)(MA0C4;196:196)(MA0C5;197:197)(MA0C6;198:198)(MA0C7;199:199)(MA0C8;200:200)(MA0C9;201:201)(MA0C10;202:202)(MA0C11;203:203)(MA0C12;204:204)(MA0C13;205:205)(MA0C14;206:206)(MA0C15;207:207)(MA0C16;208:208)(MA0C17;209:209)(MA0C18;210:210)(MA0C19;211:211)(MA0C20;212:212)(MA0C21;213:213)(MA0C22;214:214)(MA0C23;215:215)(MA0C24;216:216)(MA0C25;217:217)(MA0C26;218:218)(MA0C27;219:219)(MA0C28;220:220)(MA0C29;221:221)(MA0C30;222:222)(MA0C31;223:223)(MA1C0;224:224)(MA1C1;225:225)(MA1C2;226:226)(MA1C3;227:227)(MA1C4;228:228)(MA1C5;229:229)(MA1C6;230:230)(MA1C7;231:231)(MA1C8;232:232)(MA1C9;233:233)(MA1C10;234:234)(MA1C11;235:235)(MA1C12;236:236)(MA1C13;237:237)(MA1C14;238:238)(MA1C15;239:239)(MA1C16;240:240)(MA1C17;241:241)(MA1C18;242:242)(MA1C19;243:243)(MA1C20;244:244)(MA1C21;245:245)(MA1C22;246:246)(MA1C23;247:247)(MA1C24;248:248)(MA1C25;249:249)(MA1C26;250:250)(MA1C27;251:251)(MA1C28;252:252)(MA1C29;253:253)(MA1C30;254:254)(MA1C31;255:255)(XD0;256:256)
```

The channel map describes the order of graphs in SpikeGLX displays. The
header for the nidq stream, here (6,2,32,0,1), indicates there are:

* 6 MN-type NI-DAQ input channels,
* 2 MA-type NI-DAQ input channels,
* 32 multiplexed logical channels per MN/MA input,
* 0 XA NI-DAQ channels,
* 1 XD NI-DAQ line.

Each subsequent entry in the map has two fields, (:)-separated:

* Channel name, e.g., 'MN0C2;2'
* Zero-based order index.

>Note: There are map entries only for saved channels.

### If Using 2nd NIDQ Card

```
niClockLine2
```

```
niDev2
```

```
niDev2ProductName
```

```
niDualDevMode=true
```

```
niMAChans2
```

```
niMNChans2
```

```
niXAChans2
```

```
niXDBytes2
```

```
niXDChans2
```

## IMEC

```
acqApLfSy=384,384,1
```

This is the count of channels, of each type, in each timepoint,
at acquisition time.

```
imAiRangeMax=0.6
```

Convert from 16-bit analog values (i) to voltages (V) as follows:

V = i * Vmax / Imax / gain.

For type 21 or type 24 imec probes:

* Imax = 8192
* Vmax = `imAiRangeMax`
* gain = 80 (fixed).

```
imAiRangeMin=-0.6
```

```
imCalibrated=true
```

Imec ADC and/or gain calibration files were applied to the probe.

```
imDatApi=3.31
```

This is the Imec API version number: major.minor.

```
imDatBs_fw=2.0.137
```

This is the BS firmware version number: major.minor.build.

```
imDatBsc_fw=3.2.176
```

This is the BSC firmware version number: major.minor.build.

```
imDatBsc_hw=2.1
```

This is the BSC hardware version number: major.minor.

```
imDatBsc_pn=NP2_QBSC_00
```

This is the BSC part number.

```
imDatBsc_sn=175
```

This is the BSC serial number.

```
imDatFx_hw=1.7
```

This is the Flex hardware version number: major.minor.

```
imDatFx_pn=NPM_FLEX_0
```

This is the Flex part number.

```
imDatHs_fw=1.0
```

This is the HS firmware version number: major.minor.

```
imDatHs_pn=NPM_HS_01
```

This is the HS part number.

```
imDatHs_sn=1440
```

This is the HS serial number.

```
imDatPrb_dock=1
```

This is the probe dock number.

```
imDatPrb_pn=PRB2_1_2_0640_0
```

This is the probe part number.

```
imDatPrb_port=1
```

This is the probe port number.

```
imDatPrb_slot=2
```

This is the probe slot number.

```
imDatPrb_sn=19011116444
```

This is the probe serial number.

```
imDatPrb_type=21
```

This is the probe type {0=NP1.0, 21=NP2.0(1-shank), 24=NP2.0(4-shank)}.

```
imLEDEnable=false
```

```
imMaxInt=512
```

Maximum amplitude integer encoded in the 16-bit analog channels.
Really, in this example [-512..511]. The reason for this apparent
asymmetry is that, by convention, zero is grouped with the positive
values. The example probe is 10-bit, so encodes 2^10 = 1024 values.
There are 512 negative values: [-512..-1] and 512 positives: [0..511].
This convention (zero is a positive number) applies in all signed
computer arithmetic.

```
imRoFile=
```

This is a path to your custom Imec Readout Table (imRo) file. If you
elect default settings no file is needed. The active table content is
stored as tag `~imroTbl` whether custom or default.

```
imSampRate=30000
```

```
imSkipCal=false
```

ADC and gain calibration steps can be bypassed if for some reason you don't
have the calibration files for your probe.

```
imStdby=0:12,45
```

These channels had been placed in stand-by mode, which means their analog
amplifiers were switched off. Stand-by channels are still read from the
hardware and stored in the data stream. The only reason to set stand-by
mode is to reduce noise/crosstalk in the system (may not be needed in
commercial system).

```
imTrgRising=true
```

Selects whether external trigger detects a rising or falling edge.

```
imTrgSource=0
```

Selects the type of trigger that starts the run: {0=software, 1=SMA connector,
2-17=BSC pins 0-15, 18=PXI}.

```
snsApLfSy=384,0,1
```

This is the count of channels, of each type, in each timepoint,
as stored in the binary file.

```
syncImInputSlot=2
```

The Imec slot getting a sync signal input. You should connect sync signals
to only one slot (one SMA). Note that the signal is recorded in the data
for each probe as bit 6 of that stream's aux (SY) word.

```
~imroTbl=(0,384)(0 0 0 500 250 1)(1 0 0 500 250 1)(2 0 0 500 250 1)(3 0 0 500 250 1)(4 0 0 500 250 1)(5 0 0 500 250 1)(6 0 0 500 250 1)(7 0 0 500 250 1)(8 0 0 500 250 1)(9 0 0 500 250 1)(10 0 0 500 250 1)(11 0 0 500 250 1)(12 0 0 500 250 1)(13 0 0 500 250 1)(14 0 0 500 250 1)(15 0 0 500 250 1)(16 0 0 500 250 1)(17 0 0 500 250 1)(18 0 0 500 250 1)(19 0 0 500 250 1)(20 0 0 500 250 1)(21 0 0 500 250 1)(22 0 0 500 250 1)(23 0 0 500 250 1)(24 0 0 500 250 1)(25 0 0 500 250 1)(26 0 0 500 250 1)(27 0 0 500 250 1)(28 0 0 500 250 1)(29 0 0 500 250 1)(30 0 0 500 250 1)(31 0 0 500 250 1)(32 0 0 500 250 1)(33 0 0 500 250 1)(34 0 0 500 250 1)(35 0 0 500 250 1)(36 0 0 500 250 1)(37 0 0 500 250 1)(38 0 0 500 250 1)(39 0 0 500 250 1)(40 0 0 500 250 1)(41 0 0 500 250 1)(42 0 0 500 250 1)(43 0 0 500 250 1)(44 0 0 500 250 1)(45 0 0 500 250 1)(46 0 0 500 250 1)(47 0 0 500 250 1)(48 0 0 500 250 1)(49 0 0 500 250 1)(50 0 0 500 250 1)(51 0 0 500 250 1)(52 0 0 500 250 1)(53 0 0 500 250 1)(54 0 0 500 250 1)(55 0 0 500 250 1)(56 0 0 500 250 1)(57 0 0 500 250 1)(58 0 0 500 250 1)(59 0 0 500 250 1)(60 0 0 500 250 1)(61 0 0 500 250 1)(62 0 0 500 250 1)(63 0 0 500 250 1)(64 0 0 500 250 1)(65 0 0 500 250 1)(66 0 0 500 250 1)(67 0 0 500 250 1)(68 0 0 500 250 1)(69 0 0 500 250 1)(70 0 0 500 250 1)(71 0 0 500 250 1)(72 0 0 500 250 1)(73 0 0 500 250 1)(74 0 0 500 250 1)(75 0 0 500 250 1)(76 0 0 500 250 1)(77 0 0 500 250 1)(78 0 0 500 250 1)(79 0 0 500 250 1)(80 0 0 500 250 1)(81 0 0 500 250 1)(82 0 0 500 250 1)(83 0 0 500 250 1)(84 0 0 500 250 1)(85 0 0 500 250 1)(86 0 0 500 250 1)(87 0 0 500 250 1)(88 0 0 500 250 1)(89 0 0 500 250 1)(90 0 0 500 250 1)(91 0 0 500 250 1)(92 0 0 500 250 1)(93 0 0 500 250 1)(94 0 0 500 250 1)(95 0 0 500 250 1)(96 0 0 500 250 1)(97 0 0 500 250 1)(98 0 0 500 250 1)(99 0 0 500 250 1)(100 0 0 500 250 1)(101 0 0 500 250 1)(102 0 0 500 250 1)(103 0 0 500 250 1)(104 0 0 500 250 1)(105 0 0 500 250 1)(106 0 0 500 250 1)(107 0 0 500 250 1)(108 0 0 500 250 1)(109 0 0 500 250 1)(110 0 0 500 250 1)(111 0 0 500 250 1)(112 0 0 500 250 1)(113 0 0 500 250 1)(114 0 0 500 250 1)(115 0 0 500 250 1)(116 0 0 500 250 1)(117 0 0 500 250 1)(118 0 0 500 250 1)(119 0 0 500 250 1)(120 0 0 500 250 1)(121 0 0 500 250 1)(122 0 0 500 250 1)(123 0 0 500 250 1)(124 0 0 500 250 1)(125 0 0 500 250 1)(126 0 0 500 250 1)(127 0 0 500 250 1)(128 0 0 500 250 1)(129 0 0 500 250 1)(130 0 0 500 250 1)(131 0 0 500 250 1)(132 0 0 500 250 1)(133 0 0 500 250 1)(134 0 0 500 250 1)(135 0 0 500 250 1)(136 0 0 500 250 1)(137 0 0 500 250 1)(138 0 0 500 250 1)(139 0 0 500 250 1)(140 0 0 500 250 1)(141 0 0 500 250 1)(142 0 0 500 250 1)(143 0 0 500 250 1)(144 0 0 500 250 1)(145 0 0 500 250 1)(146 0 0 500 250 1)(147 0 0 500 250 1)(148 0 0 500 250 1)(149 0 0 500 250 1)(150 0 0 500 250 1)(151 0 0 500 250 1)(152 0 0 500 250 1)(153 0 0 500 250 1)(154 0 0 500 250 1)(155 0 0 500 250 1)(156 0 0 500 250 1)(157 0 0 500 250 1)(158 0 0 500 250 1)(159 0 0 500 250 1)(160 0 0 500 250 1)(161 0 0 500 250 1)(162 0 0 500 250 1)(163 0 0 500 250 1)(164 0 0 500 250 1)(165 0 0 500 250 1)(166 0 0 500 250 1)(167 0 0 500 250 1)(168 0 0 500 250 1)(169 0 0 500 250 1)(170 0 0 500 250 1)(171 0 0 500 250 1)(172 0 0 500 250 1)(173 0 0 500 250 1)(174 0 0 500 250 1)(175 0 0 500 250 1)(176 0 0 500 250 1)(177 0 0 500 250 1)(178 0 0 500 250 1)(179 0 0 500 250 1)(180 0 0 500 250 1)(181 0 0 500 250 1)(182 0 0 500 250 1)(183 0 0 500 250 1)(184 0 0 500 250 1)(185 0 0 500 250 1)(186 0 0 500 250 1)(187 0 0 500 250 1)(188 0 0 500 250 1)(189 0 0 500 250 1)(190 0 0 500 250 1)(191 0 0 500 250 1)(192 0 0 500 250 1)(193 0 0 500 250 1)(194 0 0 500 250 1)(195 0 0 500 250 1)(196 0 0 500 250 1)(197 0 0 500 250 1)(198 0 0 500 250 1)(199 0 0 500 250 1)(200 0 0 500 250 1)(201 0 0 500 250 1)(202 0 0 500 250 1)(203 0 0 500 250 1)(204 0 0 500 250 1)(205 0 0 500 250 1)(206 0 0 500 250 1)(207 0 0 500 250 1)(208 0 0 500 250 1)(209 0 0 500 250 1)(210 0 0 500 250 1)(211 0 0 500 250 1)(212 0 0 500 250 1)(213 0 0 500 250 1)(214 0 0 500 250 1)(215 0 0 500 250 1)(216 0 0 500 250 1)(217 0 0 500 250 1)(218 0 0 500 250 1)(219 0 0 500 250 1)(220 0 0 500 250 1)(221 0 0 500 250 1)(222 0 0 500 250 1)(223 0 0 500 250 1)(224 0 0 500 250 1)(225 0 0 500 250 1)(226 0 0 500 250 1)(227 0 0 500 250 1)(228 0 0 500 250 1)(229 0 0 500 250 1)(230 0 0 500 250 1)(231 0 0 500 250 1)(232 0 0 500 250 1)(233 0 0 500 250 1)(234 0 0 500 250 1)(235 0 0 500 250 1)(236 0 0 500 250 1)(237 0 0 500 250 1)(238 0 0 500 250 1)(239 0 0 500 250 1)(240 0 0 500 250 1)(241 0 0 500 250 1)(242 0 0 500 250 1)(243 0 0 500 250 1)(244 0 0 500 250 1)(245 0 0 500 250 1)(246 0 0 500 250 1)(247 0 0 500 250 1)(248 0 0 500 250 1)(249 0 0 500 250 1)(250 0 0 500 250 1)(251 0 0 500 250 1)(252 0 0 500 250 1)(253 0 0 500 250 1)(254 0 0 500 250 1)(255 0 0 500 250 1)(256 0 0 500 250 1)(257 0 0 500 250 1)(258 0 0 500 250 1)(259 0 0 500 250 1)(260 0 0 500 250 1)(261 0 0 500 250 1)(262 0 0 500 250 1)(263 0 0 500 250 1)(264 0 0 500 250 1)(265 0 0 500 250 1)(266 0 0 500 250 1)(267 0 0 500 250 1)(268 0 0 500 250 1)(269 0 0 500 250 1)(270 0 0 500 250 1)(271 0 0 500 250 1)(272 0 0 500 250 1)(273 0 0 500 250 1)(274 0 0 500 250 1)(275 0 0 500 250 1)(276 0 0 500 250 1)(277 0 0 500 250 1)(278 0 0 500 250 1)(279 0 0 500 250 1)(280 0 0 500 250 1)(281 0 0 500 250 1)(282 0 0 500 250 1)(283 0 0 500 250 1)(284 0 0 500 250 1)(285 0 0 500 250 1)(286 0 0 500 250 1)(287 0 0 500 250 1)(288 0 0 500 250 1)(289 0 0 500 250 1)(290 0 0 500 250 1)(291 0 0 500 250 1)(292 0 0 500 250 1)(293 0 0 500 250 1)(294 0 0 500 250 1)(295 0 0 500 250 1)(296 0 0 500 250 1)(297 0 0 500 250 1)(298 0 0 500 250 1)(299 0 0 500 250 1)(300 0 0 500 250 1)(301 0 0 500 250 1)(302 0 0 500 250 1)(303 0 0 500 250 1)(304 0 0 500 250 1)(305 0 0 500 250 1)(306 0 0 500 250 1)(307 0 0 500 250 1)(308 0 0 500 250 1)(309 0 0 500 250 1)(310 0 0 500 250 1)(311 0 0 500 250 1)(312 0 0 500 250 1)(313 0 0 500 250 1)(314 0 0 500 250 1)(315 0 0 500 250 1)(316 0 0 500 250 1)(317 0 0 500 250 1)(318 0 0 500 250 1)(319 0 0 500 250 1)(320 0 0 500 250 1)(321 0 0 500 250 1)(322 0 0 500 250 1)(323 0 0 500 250 1)(324 0 0 500 250 1)(325 0 0 500 250 1)(326 0 0 500 250 1)(327 0 0 500 250 1)(328 0 0 500 250 1)(329 0 0 500 250 1)(330 0 0 500 250 1)(331 0 0 500 250 1)(332 0 0 500 250 1)(333 0 0 500 250 1)(334 0 0 500 250 1)(335 0 0 500 250 1)(336 0 0 500 250 1)(337 0 0 500 250 1)(338 0 0 500 250 1)(339 0 0 500 250 1)(340 0 0 500 250 1)(341 0 0 500 250 1)(342 0 0 500 250 1)(343 0 0 500 250 1)(344 0 0 500 250 1)(345 0 0 500 250 1)(346 0 0 500 250 1)(347 0 0 500 250 1)(348 0 0 500 250 1)(349 0 0 500 250 1)(350 0 0 500 250 1)(351 0 0 500 250 1)(352 0 0 500 250 1)(353 0 0 500 250 1)(354 0 0 500 250 1)(355 0 0 500 250 1)(356 0 0 500 250 1)(357 0 0 500 250 1)(358 0 0 500 250 1)(359 0 0 500 250 1)(360 0 0 500 250 1)(361 0 0 500 250 1)(362 0 0 500 250 1)(363 0 0 500 250 1)(364 0 0 500 250 1)(365 0 0 500 250 1)(366 0 0 500 250 1)(367 0 0 500 250 1)(368 0 0 500 250 1)(369 0 0 500 250 1)(370 0 0 500 250 1)(371 0 0 500 250 1)(372 0 0 500 250 1)(373 0 0 500 250 1)(374 0 0 500 250 1)(375 0 0 500 250 1)(376 0 0 500 250 1)(377 0 0 500 250 1)(378 0 0 500 250 1)(379 0 0 500 250 1)(380 0 0 500 250 1)(381 0 0 500 250 1)(382 0 0 500 250 1)(383 0 0 500 250 1)
~imroTbl=(21,384)(0 1 0 0)(1 1 0 1)(2 1 0 2)(3 1 0 3)(4 1 0 4)(5 1 0 5)(6 1 0 6)(7 1 0 7)(8 1 0 8)(9 1 0 9)(10 1 0 10)(11 1 0 11)(12 1 0 12)(13 1 0 13)(14 1 0 14)(15 1 0 15)(16 1 0 16)(17 1 0 17)(18 1 0 18)(19 1 0 19)(20 1 0 20)(21 1 0 21)(22 1 0 22)(23 1 0 23)(24 1 0 24)(25 1 0 25)(26 1 0 26)(27 1 0 27)(28 1 0 28)(29 1 0 29)(30 1 0 30)(31 1 0 31)(32 1 0 32)(33 1 0 33)(34 1 0 34)(35 1 0 35)(36 1 0 36)(37 1 0 37)(38 1 0 38)(39 1 0 39)(40 1 0 40)(41 1 0 41)(42 1 0 42)(43 1 0 43)(44 1 0 44)(45 1 0 45)(46 1 0 46)(47 1 0 47)(48 1 0 48)(49 1 0 49)(50 1 0 50)(51 1 0 51)(52 1 0 52)(53 1 0 53)(54 1 0 54)(55 1 0 55)(56 1 0 56)(57 1 0 57)(58 1 0 58)(59 1 0 59)(60 1 0 60)(61 1 0 61)(62 1 0 62)(63 1 0 63)(64 1 0 64)(65 1 0 65)(66 1 0 66)(67 1 0 67)(68 1 0 68)(69 1 0 69)(70 1 0 70)(71 1 0 71)(72 1 0 72)(73 1 0 73)(74 1 0 74)(75 1 0 75)(76 1 0 76)(77 1 0 77)(78 1 0 78)(79 1 0 79)(80 1 0 80)(81 1 0 81)(82 1 0 82)(83 1 0 83)(84 1 0 84)(85 1 0 85)(86 1 0 86)(87 1 0 87)(88 1 0 88)(89 1 0 89)(90 1 0 90)(91 1 0 91)(92 1 0 92)(93 1 0 93)(94 1 0 94)(95 1 0 95)(96 1 0 96)(97 1 0 97)(98 1 0 98)(99 1 0 99)(100 1 0 100)(101 1 0 101)(102 1 0 102)(103 1 0 103)(104 1 0 104)(105 1 0 105)(106 1 0 106)(107 1 0 107)(108 1 0 108)(109 1 0 109)(110 1 0 110)(111 1 0 111)(112 1 0 112)(113 1 0 113)(114 1 0 114)(115 1 0 115)(116 1 0 116)(117 1 0 117)(118 1 0 118)(119 1 0 119)(120 1 0 120)(121 1 0 121)(122 1 0 122)(123 1 0 123)(124 1 0 124)(125 1 0 125)(126 1 0 126)(127 1 0 127)(128 1 0 128)(129 1 0 129)(130 1 0 130)(131 1 0 131)(132 1 0 132)(133 1 0 133)(134 1 0 134)(135 1 0 135)(136 1 0 136)(137 1 0 137)(138 1 0 138)(139 1 0 139)(140 1 0 140)(141 1 0 141)(142 1 0 142)(143 1 0 143)(144 1 0 144)(145 1 0 145)(146 1 0 146)(147 1 0 147)(148 1 0 148)(149 1 0 149)(150 1 0 150)(151 1 0 151)(152 1 0 152)(153 1 0 153)(154 1 0 154)(155 1 0 155)(156 1 0 156)(157 1 0 157)(158 1 0 158)(159 1 0 159)(160 1 0 160)(161 1 0 161)(162 1 0 162)(163 1 0 163)(164 1 0 164)(165 1 0 165)(166 1 0 166)(167 1 0 167)(168 1 0 168)(169 1 0 169)(170 1 0 170)(171 1 0 171)(172 1 0 172)(173 1 0 173)(174 1 0 174)(175 1 0 175)(176 1 0 176)(177 1 0 177)(178 1 0 178)(179 1 0 179)(180 1 0 180)(181 1 0 181)(182 1 0 182)(183 1 0 183)(184 1 0 184)(185 1 0 185)(186 1 0 186)(187 1 0 187)(188 1 0 188)(189 1 0 189)(190 1 0 190)(191 1 0 191)(192 1 0 192)(193 1 0 193)(194 1 0 194)(195 1 0 195)(196 1 0 196)(197 1 0 197)(198 1 0 198)(199 1 0 199)(200 1 0 200)(201 1 0 201)(202 1 0 202)(203 1 0 203)(204 1 0 204)(205 1 0 205)(206 1 0 206)(207 1 0 207)(208 1 0 208)(209 1 0 209)(210 1 0 210)(211 1 0 211)(212 1 0 212)(213 1 0 213)(214 1 0 214)(215 1 0 215)(216 1 0 216)(217 1 0 217)(218 1 0 218)(219 1 0 219)(220 1 0 220)(221 1 0 221)(222 1 0 222)(223 1 0 223)(224 1 0 224)(225 1 0 225)(226 1 0 226)(227 1 0 227)(228 1 0 228)(229 1 0 229)(230 1 0 230)(231 1 0 231)(232 1 0 232)(233 1 0 233)(234 1 0 234)(235 1 0 235)(236 1 0 236)(237 1 0 237)(238 1 0 238)(239 1 0 239)(240 1 0 240)(241 1 0 241)(242 1 0 242)(243 1 0 243)(244 1 0 244)(245 1 0 245)(246 1 0 246)(247 1 0 247)(248 1 0 248)(249 1 0 249)(250 1 0 250)(251 1 0 251)(252 1 0 252)(253 1 0 253)(254 1 0 254)(255 1 0 255)(256 1 0 256)(257 1 0 257)(258 1 0 258)(259 1 0 259)(260 1 0 260)(261 1 0 261)(262 1 0 262)(263 1 0 263)(264 1 0 264)(265 1 0 265)(266 1 0 266)(267 1 0 267)(268 1 0 268)(269 1 0 269)(270 1 0 270)(271 1 0 271)(272 1 0 272)(273 1 0 273)(274 1 0 274)(275 1 0 275)(276 1 0 276)(277 1 0 277)(278 1 0 278)(279 1 0 279)(280 1 0 280)(281 1 0 281)(282 1 0 282)(283 1 0 283)(284 1 0 284)(285 1 0 285)(286 1 0 286)(287 1 0 287)(288 1 0 288)(289 1 0 289)(290 1 0 290)(291 1 0 291)(292 1 0 292)(293 1 0 293)(294 1 0 294)(295 1 0 295)(296 1 0 296)(297 1 0 297)(298 1 0 298)(299 1 0 299)(300 1 0 300)(301 1 0 301)(302 1 0 302)(303 1 0 303)(304 1 0 304)(305 1 0 305)(306 1 0 306)(307 1 0 307)(308 1 0 308)(309 1 0 309)(310 1 0 310)(311 1 0 311)(312 1 0 312)(313 1 0 313)(314 1 0 314)(315 1 0 315)(316 1 0 316)(317 1 0 317)(318 1 0 318)(319 1 0 319)(320 1 0 320)(321 1 0 321)(322 1 0 322)(323 1 0 323)(324 1 0 324)(325 1 0 325)(326 1 0 326)(327 1 0 327)(328 1 0 328)(329 1 0 329)(330 1 0 330)(331 1 0 331)(332 1 0 332)(333 1 0 333)(334 1 0 334)(335 1 0 335)(336 1 0 336)(337 1 0 337)(338 1 0 338)(339 1 0 339)(340 1 0 340)(341 1 0 341)(342 1 0 342)(343 1 0 343)(344 1 0 344)(345 1 0 345)(346 1 0 346)(347 1 0 347)(348 1 0 348)(349 1 0 349)(350 1 0 350)(351 1 0 351)(352 1 0 352)(353 1 0 353)(354 1 0 354)(355 1 0 355)(356 1 0 356)(357 1 0 357)(358 1 0 358)(359 1 0 359)(360 1 0 360)(361 1 0 361)(362 1 0 362)(363 1 0 363)(364 1 0 364)(365 1 0 365)(366 1 0 366)(367 1 0 367)(368 1 0 368)(369 1 0 369)(370 1 0 370)(371 1 0 371)(372 1 0 372)(373 1 0 373)(374 1 0 374)(375 1 0 375)(376 1 0 376)(377 1 0 377)(378 1 0 378)(379 1 0 379)(380 1 0 380)(381 1 0 381)(382 1 0 382)(383 1 0 383)
~imroTbl=(24,384)(0 0 0 1 0)(1 0 0 1 1)(2 0 0 1 2)(3 0 0 1 3)(4 0 0 1 4)(5 0 0 1 5)(6 0 0 1 6)(7 0 0 1 7)(8 0 0 1 8)(9 0 0 1 9)(10 0 0 1 10)(11 0 0 1 11)(12 0 0 1 12)(13 0 0 1 13)(14 0 0 1 14)(15 0 0 1 15)(16 0 0 1 16)(17 0 0 1 17)(18 0 0 1 18)(19 0 0 1 19)(20 0 0 1 20)(21 0 0 1 21)(22 0 0 1 22)(23 0 0 1 23)(24 0 0 1 24)(25 0 0 1 25)(26 0 0 1 26)(27 0 0 1 27)(28 0 0 1 28)(29 0 0 1 29)(30 0 0 1 30)(31 0 0 1 31)(32 0 0 1 32)(33 0 0 1 33)(34 0 0 1 34)(35 0 0 1 35)(36 0 0 1 36)(37 0 0 1 37)(38 0 0 1 38)(39 0 0 1 39)(40 0 0 1 40)(41 0 0 1 41)(42 0 0 1 42)(43 0 0 1 43)(44 0 0 1 44)(45 0 0 1 45)(46 0 0 1 46)(47 0 0 1 47)(48 0 0 1 288)(49 0 0 1 289)(50 0 0 1 290)(51 0 0 1 291)(52 0 0 1 292)(53 0 0 1 293)(54 0 0 1 294)(55 0 0 1 295)(56 0 0 1 296)(57 0 0 1 297)(58 0 0 1 298)(59 0 0 1 299)(60 0 0 1 300)(61 0 0 1 301)(62 0 0 1 302)(63 0 0 1 303)(64 0 0 1 304)(65 0 0 1 305)(66 0 0 1 306)(67 0 0 1 307)(68 0 0 1 308)(69 0 0 1 309)(70 0 0 1 310)(71 0 0 1 311)(72 0 0 1 312)(73 0 0 1 313)(74 0 0 1 314)(75 0 0 1 315)(76 0 0 1 316)(77 0 0 1 317)(78 0 0 1 318)(79 0 0 1 319)(80 0 0 1 320)(81 0 0 1 321)(82 0 0 1 322)(83 0 0 1 323)(84 0 0 1 324)(85 0 0 1 325)(86 0 0 1 326)(87 0 0 1 327)(88 0 0 1 328)(89 0 0 1 329)(90 0 0 1 330)(91 0 0 1 331)(92 0 0 1 332)(93 0 0 1 333)(94 0 0 1 334)(95 0 0 1 335)(96 0 0 1 48)(97 0 0 1 49)(98 0 0 1 50)(99 0 0 1 51)(100 0 0 1 52)(101 0 0 1 53)(102 0 0 1 54)(103 0 0 1 55)(104 0 0 1 56)(105 0 0 1 57)(106 0 0 1 58)(107 0 0 1 59)(108 0 0 1 60)(109 0 0 1 61)(110 0 0 1 62)(111 0 0 1 63)(112 0 0 1 64)(113 0 0 1 65)(114 0 0 1 66)(115 0 0 1 67)(116 0 0 1 68)(117 0 0 1 69)(118 0 0 1 70)(119 0 0 1 71)(120 0 0 1 72)(121 0 0 1 73)(122 0 0 1 74)(123 0 0 1 75)(124 0 0 1 76)(125 0 0 1 77)(126 0 0 1 78)(127 0 0 1 79)(128 0 0 1 80)(129 0 0 1 81)(130 0 0 1 82)(131 0 0 1 83)(132 0 0 1 84)(133 0 0 1 85)(134 0 0 1 86)(135 0 0 1 87)(136 0 0 1 88)(137 0 0 1 89)(138 0 0 1 90)(139 0 0 1 91)(140 0 0 1 92)(141 0 0 1 93)(142 0 0 1 94)(143 0 0 1 95)(144 0 0 1 336)(145 0 0 1 337)(146 0 0 1 338)(147 0 0 1 339)(148 0 0 1 340)(149 0 0 1 341)(150 0 0 1 342)(151 0 0 1 343)(152 0 0 1 344)(153 0 0 1 345)(154 0 0 1 346)(155 0 0 1 347)(156 0 0 1 348)(157 0 0 1 349)(158 0 0 1 350)(159 0 0 1 351)(160 0 0 1 352)(161 0 0 1 353)(162 0 0 1 354)(163 0 0 1 355)(164 0 0 1 356)(165 0 0 1 357)(166 0 0 1 358)(167 0 0 1 359)(168 0 0 1 360)(169 0 0 1 361)(170 0 0 1 362)(171 0 0 1 363)(172 0 0 1 364)(173 0 0 1 365)(174 0 0 1 366)(175 0 0 1 367)(176 0 0 1 368)(177 0 0 1 369)(178 0 0 1 370)(179 0 0 1 371)(180 0 0 1 372)(181 0 0 1 373)(182 0 0 1 374)(183 0 0 1 375)(184 0 0 1 376)(185 0 0 1 377)(186 0 0 1 378)(187 0 0 1 379)(188 0 0 1 380)(189 0 0 1 381)(190 0 0 1 382)(191 0 0 1 383)(192 0 0 1 96)(193 0 0 1 97)(194 0 0 1 98)(195 0 0 1 99)(196 0 0 1 100)(197 0 0 1 101)(198 0 0 1 102)(199 0 0 1 103)(200 0 0 1 104)(201 0 0 1 105)(202 0 0 1 106)(203 0 0 1 107)(204 0 0 1 108)(205 0 0 1 109)(206 0 0 1 110)(207 0 0 1 111)(208 0 0 1 112)(209 0 0 1 113)(210 0 0 1 114)(211 0 0 1 115)(212 0 0 1 116)(213 0 0 1 117)(214 0 0 1 118)(215 0 0 1 119)(216 0 0 1 120)(217 0 0 1 121)(218 0 0 1 122)(219 0 0 1 123)(220 0 0 1 124)(221 0 0 1 125)(222 0 0 1 126)(223 0 0 1 127)(224 0 0 1 128)(225 0 0 1 129)(226 0 0 1 130)(227 0 0 1 131)(228 0 0 1 132)(229 0 0 1 133)(230 0 0 1 134)(231 0 0 1 135)(232 0 0 1 136)(233 0 0 1 137)(234 0 0 1 138)(235 0 0 1 139)(236 0 0 1 140)(237 0 0 1 141)(238 0 0 1 142)(239 0 0 1 143)(240 0 0 1 192)(241 0 0 1 193)(242 0 0 1 194)(243 0 0 1 195)(244 0 0 1 196)(245 0 0 1 197)(246 0 0 1 198)(247 0 0 1 199)(248 0 0 1 200)(249 0 0 1 201)(250 0 0 1 202)(251 0 0 1 203)(252 0 0 1 204)(253 0 0 1 205)(254 0 0 1 206)(255 0 0 1 207)(256 0 0 1 208)(257 0 0 1 209)(258 0 0 1 210)(259 0 0 1 211)(260 0 0 1 212)(261 0 0 1 213)(262 0 0 1 214)(263 0 0 1 215)(264 0 0 1 216)(265 0 0 1 217)(266 0 0 1 218)(267 0 0 1 219)(268 0 0 1 220)(269 0 0 1 221)(270 0 0 1 222)(271 0 0 1 223)(272 0 0 1 224)(273 0 0 1 225)(274 0 0 1 226)(275 0 0 1 227)(276 0 0 1 228)(277 0 0 1 229)(278 0 0 1 230)(279 0 0 1 231)(280 0 0 1 232)(281 0 0 1 233)(282 0 0 1 234)(283 0 0 1 235)(284 0 0 1 236)(285 0 0 1 237)(286 0 0 1 238)(287 0 0 1 239)(288 0 0 1 144)(289 0 0 1 145)(290 0 0 1 146)(291 0 0 1 147)(292 0 0 1 148)(293 0 0 1 149)(294 0 0 1 150)(295 0 0 1 151)(296 0 0 1 152)(297 0 0 1 153)(298 0 0 1 154)(299 0 0 1 155)(300 0 0 1 156)(301 0 0 1 157)(302 0 0 1 158)(303 0 0 1 159)(304 0 0 1 160)(305 0 0 1 161)(306 0 0 1 162)(307 0 0 1 163)(308 0 0 1 164)(309 0 0 1 165)(310 0 0 1 166)(311 0 0 1 167)(312 0 0 1 168)(313 0 0 1 169)(314 0 0 1 170)(315 0 0 1 171)(316 0 0 1 172)(317 0 0 1 173)(318 0 0 1 174)(319 0 0 1 175)(320 0 0 1 176)(321 0 0 1 177)(322 0 0 1 178)(323 0 0 1 179)(324 0 0 1 180)(325 0 0 1 181)(326 0 0 1 182)(327 0 0 1 183)(328 0 0 1 184)(329 0 0 1 185)(330 0 0 1 186)(331 0 0 1 187)(332 0 0 1 188)(333 0 0 1 189)(334 0 0 1 190)(335 0 0 1 191)(336 0 0 1 240)(337 0 0 1 241)(338 0 0 1 242)(339 0 0 1 243)(340 0 0 1 244)(341 0 0 1 245)(342 0 0 1 246)(343 0 0 1 247)(344 0 0 1 248)(345 0 0 1 249)(346 0 0 1 250)(347 0 0 1 251)(348 0 0 1 252)(349 0 0 1 253)(350 0 0 1 254)(351 0 0 1 255)(352 0 0 1 256)(353 0 0 1 257)(354 0 0 1 258)(355 0 0 1 259)(356 0 0 1 260)(357 0 0 1 261)(358 0 0 1 262)(359 0 0 1 263)(360 0 0 1 264)(361 0 0 1 265)(362 0 0 1 266)(363 0 0 1 267)(364 0 0 1 268)(365 0 0 1 269)(366 0 0 1 270)(367 0 0 1 271)(368 0 0 1 272)(369 0 0 1 273)(370 0 0 1 274)(371 0 0 1 275)(372 0 0 1 276)(373 0 0 1 277)(374 0 0 1 278)(375 0 0 1 279)(376 0 0 1 280)(377 0 0 1 281)(378 0 0 1 282)(379 0 0 1 283)(380 0 0 1 284)(381 0 0 1 285)(382 0 0 1 286)(383 0 0 1 287)
```

The first entry of the Imec Readout Table (imRo) is a header indicating
(probe-type, number of channels). The meaning of the subsequent channel
entries depends upon the probe type.

>Note: Unlike snsShankMap and snsChanMap which store entries only for saved
channels, the imroTbl always has entries for all acquired channels.

### Channel Entries By Type

**Type 0 (NP 1.0)**:

* Channel ID,
* Bank number of the connected electrode,
* Reference ID index,
* AP band gain,
* LF band gain,
* AP hipass filter applied (1=ON)

The reference ID values are {0=ext, 1=tip, [2..4]=on-shnk-ref}.
The on-shnk ref electrodes are {192,576,960}.

**Type 21 (NP 2.0, single multiplexed shank)**:

* Channel ID,
* Bank mask (logical OR of {1=bnk-0, 2=bnk-1, 4=bnk-2, 8=bnk-3}),
* Reference ID index,
* Electrode ID (range [0,1279])

The reference ID values are {0=ext, 1=tip, [2..5]=on-shnk-ref}.
The on-shnk ref electrodes are {127,507,887,1251}.

**Type 24 (NP 2.0, 4-shank)**:

* Channel ID,
* Shank ID,
* Bank ID,
* Reference ID index,
* Electrode ID (range [0,1279] on each shank)

The reference ID values are {0=ext, [1..4]=tip{0,1,2,3}, [5..8]=on-shnk-0, [9..12]=on-shnk-1, [13..16]=on-shnk-2, [17..20]=on-shnk-3}.
The on-shnk ref electrodes of any shank are {127,511,895,1279}.

```
~snsChanMap=(384,384,1)(AP0;0:0)(AP1;1:1)(AP2;2:2)(AP3;3:3)(AP4;4:4)(AP5;5:5)(AP6;6:6)(AP7;7:7)(AP8;8:8)(AP9;9:9)(AP10;10:10)(AP11;11:11)(AP12;12:12)(AP13;13:13)(AP14;14:14)(AP15;15:15)(AP16;16:16)(AP17;17:17)(AP18;18:18)(AP19;19:19)(AP20;20:20)(AP21;21:21)(AP22;22:22)(AP23;23:23)(AP24;24:24)(AP25;25:25)(AP26;26:26)(AP27;27:27)(AP28;28:28)(AP29;29:29)(AP30;30:30)(AP31;31:31)(AP32;32:32)(AP33;33:33)(AP34;34:34)(AP35;35:35)(AP36;36:36)(AP37;37:37)(AP38;38:38)(AP39;39:39)(AP40;40:40)(AP41;41:41)(AP42;42:42)(AP43;43:43)(AP44;44:44)(AP45;45:45)(AP46;46:46)(AP47;47:47)(AP48;48:48)(AP49;49:49)(AP50;50:50)(AP51;51:51)(AP52;52:52)(AP53;53:53)(AP54;54:54)(AP55;55:55)(AP56;56:56)(AP57;57:57)(AP58;58:58)(AP59;59:59)(AP60;60:60)(AP61;61:61)(AP62;62:62)(AP63;63:63)(AP64;64:64)(AP65;65:65)(AP66;66:66)(AP67;67:67)(AP68;68:68)(AP69;69:69)(AP70;70:70)(AP71;71:71)(AP72;72:72)(AP73;73:73)(AP74;74:74)(AP75;75:75)(AP76;76:76)(AP77;77:77)(AP78;78:78)(AP79;79:79)(AP80;80:80)(AP81;81:81)(AP82;82:82)(AP83;83:83)(AP84;84:84)(AP85;85:85)(AP86;86:86)(AP87;87:87)(AP88;88:88)(AP89;89:89)(AP90;90:90)(AP91;91:91)(AP92;92:92)(AP93;93:93)(AP94;94:94)(AP95;95:95)(AP96;96:96)(AP97;97:97)(AP98;98:98)(AP99;99:99)(AP100;100:100)(AP101;101:101)(AP102;102:102)(AP103;103:103)(AP104;104:104)(AP105;105:105)(AP106;106:106)(AP107;107:107)(AP108;108:108)(AP109;109:109)(AP110;110:110)(AP111;111:111)(AP112;112:112)(AP113;113:113)(AP114;114:114)(AP115;115:115)(AP116;116:116)(AP117;117:117)(AP118;118:118)(AP119;119:119)(AP120;120:120)(AP121;121:121)(AP122;122:122)(AP123;123:123)(AP124;124:124)(AP125;125:125)(AP126;126:126)(AP127;127:127)(AP128;128:128)(AP129;129:129)(AP130;130:130)(AP131;131:131)(AP132;132:132)(AP133;133:133)(AP134;134:134)(AP135;135:135)(AP136;136:136)(AP137;137:137)(AP138;138:138)(AP139;139:139)(AP140;140:140)(AP141;141:141)(AP142;142:142)(AP143;143:143)(AP144;144:144)(AP145;145:145)(AP146;146:146)(AP147;147:147)(AP148;148:148)(AP149;149:149)(AP150;150:150)(AP151;151:151)(AP152;152:152)(AP153;153:153)(AP154;154:154)(AP155;155:155)(AP156;156:156)(AP157;157:157)(AP158;158:158)(AP159;159:159)(AP160;160:160)(AP161;161:161)(AP162;162:162)(AP163;163:163)(AP164;164:164)(AP165;165:165)(AP166;166:166)(AP167;167:167)(AP168;168:168)(AP169;169:169)(AP170;170:170)(AP171;171:171)(AP172;172:172)(AP173;173:173)(AP174;174:174)(AP175;175:175)(AP176;176:176)(AP177;177:177)(AP178;178:178)(AP179;179:179)(AP180;180:180)(AP181;181:181)(AP182;182:182)(AP183;183:183)(AP184;184:184)(AP185;185:185)(AP186;186:186)(AP187;187:187)(AP188;188:188)(AP189;189:189)(AP190;190:190)(AP191;191:191)(AP192;192:192)(AP193;193:193)(AP194;194:194)(AP195;195:195)(AP196;196:196)(AP197;197:197)(AP198;198:198)(AP199;199:199)(AP200;200:200)(AP201;201:201)(AP202;202:202)(AP203;203:203)(AP204;204:204)(AP205;205:205)(AP206;206:206)(AP207;207:207)(AP208;208:208)(AP209;209:209)(AP210;210:210)(AP211;211:211)(AP212;212:212)(AP213;213:213)(AP214;214:214)(AP215;215:215)(AP216;216:216)(AP217;217:217)(AP218;218:218)(AP219;219:219)(AP220;220:220)(AP221;221:221)(AP222;222:222)(AP223;223:223)(AP224;224:224)(AP225;225:225)(AP226;226:226)(AP227;227:227)(AP228;228:228)(AP229;229:229)(AP230;230:230)(AP231;231:231)(AP232;232:232)(AP233;233:233)(AP234;234:234)(AP235;235:235)(AP236;236:236)(AP237;237:237)(AP238;238:238)(AP239;239:239)(AP240;240:240)(AP241;241:241)(AP242;242:242)(AP243;243:243)(AP244;244:244)(AP245;245:245)(AP246;246:246)(AP247;247:247)(AP248;248:248)(AP249;249:249)(AP250;250:250)(AP251;251:251)(AP252;252:252)(AP253;253:253)(AP254;254:254)(AP255;255:255)(AP256;256:256)(AP257;257:257)(AP258;258:258)(AP259;259:259)(AP260;260:260)(AP261;261:261)(AP262;262:262)(AP263;263:263)(AP264;264:264)(AP265;265:265)(AP266;266:266)(AP267;267:267)(AP268;268:268)(AP269;269:269)(AP270;270:270)(AP271;271:271)(AP272;272:272)(AP273;273:273)(AP274;274:274)(AP275;275:275)(AP276;276:276)(AP277;277:277)(AP278;278:278)(AP279;279:279)(AP280;280:280)(AP281;281:281)(AP282;282:282)(AP283;283:283)(AP284;284:284)(AP285;285:285)(AP286;286:286)(AP287;287:287)(AP288;288:288)(AP289;289:289)(AP290;290:290)(AP291;291:291)(AP292;292:292)(AP293;293:293)(AP294;294:294)(AP295;295:295)(AP296;296:296)(AP297;297:297)(AP298;298:298)(AP299;299:299)(AP300;300:300)(AP301;301:301)(AP302;302:302)(AP303;303:303)(AP304;304:304)(AP305;305:305)(AP306;306:306)(AP307;307:307)(AP308;308:308)(AP309;309:309)(AP310;310:310)(AP311;311:311)(AP312;312:312)(AP313;313:313)(AP314;314:314)(AP315;315:315)(AP316;316:316)(AP317;317:317)(AP318;318:318)(AP319;319:319)(AP320;320:320)(AP321;321:321)(AP322;322:322)(AP323;323:323)(AP324;324:324)(AP325;325:325)(AP326;326:326)(AP327;327:327)(AP328;328:328)(AP329;329:329)(AP330;330:330)(AP331;331:331)(AP332;332:332)(AP333;333:333)(AP334;334:334)(AP335;335:335)(AP336;336:336)(AP337;337:337)(AP338;338:338)(AP339;339:339)(AP340;340:340)(AP341;341:341)(AP342;342:342)(AP343;343:343)(AP344;344:344)(AP345;345:345)(AP346;346:346)(AP347;347:347)(AP348;348:348)(AP349;349:349)(AP350;350:350)(AP351;351:351)(AP352;352:352)(AP353;353:353)(AP354;354:354)(AP355;355:355)(AP356;356:356)(AP357;357:357)(AP358;358:358)(AP359;359:359)(AP360;360:360)(AP361;361:361)(AP362;362:362)(AP363;363:363)(AP364;364:364)(AP365;365:365)(AP366;366:366)(AP367;367:367)(AP368;368:368)(AP369;369:369)(AP370;370:370)(AP371;371:371)(AP372;372:372)(AP373;373:373)(AP374;374:374)(AP375;375:375)(AP376;376:376)(AP377;377:377)(AP378;378:378)(AP379;379:379)(AP380;380:380)(AP381;381:381)(AP382;382:382)(AP383;383:383)(SY0;768:768)
```

The channel map describes the order of graphs in SpikeGLX displays. The
header for the imec stream, here (384,384,1), indicates there are:

* 384 AP-band channels,
* 384 LF-band channels,
* 1 SY (sync) channel.

Each subsequent entry in the map has two fields, (:)-separated:

* Channel name, e.g., 'AP2;2'
* Zero-based order index.

>Note: There are map entries only for saved channels.


_fin_

