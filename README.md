SpikeGLX
=========

### What

SpikeGLX is a recording system for extracellular neural probes. The emphasis
is on concurrent synchronous recording from high channel count probes together
with numerous auxiliary analog and digital channels:

* Concurrent, synchronized acquisition from Imec and NI-DAQ devices.
* Imec Neuropix phase3A and phase3B probe support.
* HHMI/Whisper System support.
* Flexible visualization, filtering and sorting tools.
* Programmable triggering.
* Remote control via MATLAB.
* Powerful offline viewing and editing.

#### Imec Project Phases

There are three branches in this repo separately supporting the three Imec
Neuropix project development phases. The three phases have mutually
incompatible hardware and software, so obtain the appropriate materials
for your needs. Release software packages are labeled as phase3A, phase3B1,
or phase3B2. All early releases having no phase label are actually phase3A.
All releases support NI-DAQ based acquisition.

* **Phase3A**: Initially, 4 flavors of prototype probe (option 1, 2, 3, 4)
were created enabling consortium members to choose the most useful
architecture and feature set. Phase3A probes are connected one at a time to
a Xilinx Kintex 7 FPGA board, and accessed via Ethernet. The probes, cables,
HS and BSC parts are specific to phase3A.

* **Phase3B1**: At this phase, option 3 probes had won and were further
developed for commercial production. The same Xilinx board is retained for
one at a time probe operation over Ethernet (but reprogrammed for 3B1).
The probes, cables, HS and BSC parts are all specific to 3B1.

* **Phase3B2 (master code branch)**: This phase replaces the Xilinx board
with PXIe based modules that support acquisition from up to 8 probes at once.
The probes are the same as the phase3B1 probes, but all other hardware parts
are specific to the PXIe implementation.

### Who

SpikeGLX is developed by [Bill Karsh](https://www.janelia.org/people/bill-karsh)
of the [Tim Harris Lab](https://www.janelia.org/lab/harris-lab-apig) at
HHMI/Janelia Research Campus.

### Compiled Software

Download official release software and support materials here:
[http://billkarsh.github.io/SpikeGLX](http://billkarsh.github.io/SpikeGLX).

### System Requirements

#### General

* Phase3A Windows: XP SP3, 7, 8.1, 10.
* Phase3B Windows: 7, 8.1, 10.
* NI-DAQmx 9 or later (recommend latest version).
* Minimum of four cores.
* Minimum of 2.5 GHz.
* Minimum of 4 GB RAM for 32-bit OS.
* Minimum of 8 GB RAM for 64-bit OS.
* Dedicated second hard drive for data streaming.

SpikeGLX is multithreaded. More processors enable better workload
balancing with fewer bottlenecks. The OS, background tasks and most other
apps make heavy use of the C:/ drive. This is the worst destination for
high bandwidth data streaming. A second hard drive dedicated to data
streaming is strongly recommended. More cores and a separate drive are
by far the most important system specs. More RAM, clock speed, graphics
horsepower and so on are welcome but less critical.

#### Imec

The high channel count of Imec probes places addition demands on the
system:

* Data collection requires an SSD (solid state drive) with sustained
write speed of at least 500 MB/s (check manufacturer's specs). These
are readily available and affordable.

* For phase3A and phase3B1 Xilinx/Ethernet based implementations you must
have a dedicated network interface card (NIC) and cable rated for Gigabit
Ethernet (category 6 or better).

> We find that Ethernet dongles typically have much lower real world
bandwidth than an actual card, so plugin adapters are discouraged.
Note too, that you will configure your Ethernet device with static
IP address [phase3A=(10.2.0.123), phase3B1=(10.1.1.1)] and subnet mask
(255.0.0.0). This device can not be used for other network activity
while configured for Imec data transfer. SpikeGLX incorporates TCP/IP
servers to interface with other applications, like MATLAB, and can even
stream live data during a run. This continues to work fine, but now
requires two NIC cards: one for Imec and a separate one that can be
assigned a different address.

### Frequently Asked Questions

[SpikeGLX FAQ](Markdown/SpikeGLX_FAQ.md).

### Licensing

Use is subject to Janelia Research Campus Software Copyright 1.2 license terms:
[http://license.janelia.org/license](http://license.janelia.org/license).

QLed components are subject to GNU Library GPL v2.0 terms, which are described here:
[QLed-LGPLv2-LICENSE.txt](QLed-LGPLv2-LICENSE.txt).


_fin_

