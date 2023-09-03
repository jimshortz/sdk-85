This directory contains the 8080 version of Peter Jennings' Microchess
from 1977.

The definitive version is in microchess-for-8080-062302029.pdf.  A
machine readable version is `original.a80` which was typed in by Udo
Monk
(https://www.autometer.de/unix4fun/z80pack/ftp/altair/microchess.asm).
I removed his patches as they were not relevant to the systems in use
here.  This is used to build `original.bin` which is a binary at the
original origin of 0000h.

The original version may be easily run against SIMH by invoking it
using `AltairZ80 original.simh`.  This file includes patches to use
the Altair SIO.  Though this is an 8080 program, you must use AltairZ80
as the original altair SIMH has fallen into disrepair.

Lastly, an SDK-85 version is available as `sdk85.z80`.  This is the
original code disassembled by `z80dasm` and modifed to work on my
SDK-85 with a 32K RAM expansion and 8251A serial port.  Once again,
this is 8080 code but we are using Z80 tools as there is not much love
for 8080 mnemonics in modern toolchains.

-Jim Shortz
September 2023
