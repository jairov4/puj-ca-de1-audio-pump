Computer Architecture Course
============================
_Jairo Andres Velasco_ - [Pontificia Universidad Javeriana Cali](http://www.javerianacali.edu.co)

Base files for project in Computer Architecture course of 2014-2.
This is a system built using Qsys that includes IP cores for audio, SDRAM, SRAM, 7-segment display decoder and GPIO; and additionally includes an exported Avalon Memory Mapped master interface in order to be useful as education starter excercise into memory mapped interfaces.
This design is targeted to _Terasic DE1_ board.
The Avalon Memory Mapped master interface specification can be found in http://www.altera.com/literature/manual/mnl_avalon_spec.pdf.

Getting started
---------------

To build this project follow this steps.

  1. Download one snapshot of this project.
  2. Open the project using Altera Quartus II v13 SP1, the project file is `build/puj-ca-de1-audio-pump.qpf`
  3. Diagram your custom circuit and connect it to the memory interface in `build/puj-ca-de1-audio-pump.bdf`

Pins are already assigned.
Audio device is initialized during startup.

Project
-------

The project is about to implement a state machine based circuit able to sequence reads and writes to memory interface.
The SDRAM component stores music/audio data, you should sequence reading of samples of music from SDRAM address space to write them into Audio FIFO component.
Audio data is represented in memory as words of 16-bit per channel that needs to be sent to Audio FIFO to be played back.
This is a stereo system, thus you need to send to FIFO two writes per sample. One write to address 0x01101020 with 16-bit of Left channel, and one write to 0x01101021 with 16-bit of Right channel. You must to perform this writes in this specific order, read least significant bit of 0x01101025 in order to know if your circuit is allowed to write a new sample (zero means allowed, one means FIFO full thus disallowed).

Audio data will be loaded to SDRAM using System Console utility for Altera Qsys previously to circuit evaluation.

Memory Map
----------

This is the memory addressing map

| Peripheral | Begin Address | End Address | Size |
|------------|---------------|-------------|------|
| SDRAM      | 0x800000      | 0xFF0000    | 8MB  |
| PIO        | 0x0           | 0xF         | 16 B |
| Audio FIFO | 0x01101020    | 0x0110103F  |      |
| 7-segment  | 0x01101058    | 0x0110105B  | 4 B  |
