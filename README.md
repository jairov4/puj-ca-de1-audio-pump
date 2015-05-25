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
  3. Diagram your custom circuit in a new block diagram file.
  4. Create a new symbol file for your custom circuit, instance it and connect it to the memory interface in `build/puj-ca-de1-audio-pump.bdf`
  5. If you are using Quartus II Web Edition, you need to disable Signal Tap II feature of the project to compile succesfully.
  6. Create a new waveform simulation file only to test your single custom circuit implementation.

Pins are already assigned for Terasic DE1 board.
Audio device is initialized during startup.

Project
-------

The project is about to implement a state machine based circuit able to sequence reads and writes to memory interface.
The SDRAM component stores music/audio data, you should sequence reading of samples of music from SDRAM address space to write them into Audio FIFO component.
Audio data is represented in memory as words of 16-bit per channel that needs to be sent to Audio FIFO to be played back.
This is a stereo system, thus you need to send to FIFO two writes per sample. One write to address 0x40 with 16-bit of Left channel, and one write to 0x44 with 16-bit of Right channel. You must to perform this writes in this specific order, read least significant bit of 0x54 in order to know if your circuit is allowed to write a new sample (zero means allowed, one means FIFO full thus disallowed).

Audio data will be loaded to SDRAM using System Console utility for Altera Qsys previously to circuit evaluation.

Recommended How To
------------------

Your circuit needs to have the following components:

  1. One counter with sync reset and carry out. This counter is to follow ascending address values, SDRAM memory needs count incrementing by 2 each address.
  2. Two 16-bit registers to temporary store the read data.
  3. Some multiplexers.
  4. One State Machine to sequence the procedure.
  
Then, your state machine need to accomplish this steps:

  1. Reset the address counter to SDRAM begin address.
  2. Set up a read transaction to SDRAM memory. (`read = '1'`, `write='0'`, `address = addressCounter`)
  3. Wait for read transaction accomplished from memory. Read is done when `waitrequest = '0'`.
  4. Put 32-bit `readdata` into temporary registers `tmpReg1` and `tmpReg2`, it needs to be done in the same clock cycle that `waitrequest = '0'`.
  5. Increment address counter by 4.
  6. Set up a 16-bit write transaction to Audio FIFO Left Channel. (`read = '0'`, `write='1'`, `address = 0x40`, `writedata = tmpReg1`)
  7. Wait for write transaction accomplished from memory. Write is done when `waitrequest = '0'`
  8. Set up a 16-bit write transaction to Audio FIFO Right Channel. (`read = '0'`, `write='1'`, `address = 0x44`, `writedata = tmpReg2`)
  9. Wait for write transaction accomplished from memory. Write is done when `waitrequest = '0'`
  10. Set up a read transaction to Audio FIFO status. (`read = '1'`, `write='0'`, `address = 0x54`)
  11. Wait for read transaction accomplished from Audio FIFO status. Read is done when `waitrequest = ''0''`
  12. If the least significant bit of `readdata` is zero go to step 2. else goto step 9. Remember perform this check in the same clock cycle when `waitrequest = '0'`

Memory Map
----------

This is the memory addressing map

| Peripheral | Begin Address | End Address | Size |
|------------|---------------|-------------|------|
| SDRAM      | 0x800000      | 0xFFFFFF    | 8MB  |
| PIO        | 0x0           | 0xF         |      |
| Audio FIFO | 0x40          | 0x54        |      |
| 7-segment  | 0x01101058    | 0x0110105B  |      |
