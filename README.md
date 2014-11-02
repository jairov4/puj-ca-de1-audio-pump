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
  2. Write your util function and instance the system unit in this project.
  3. Build the project using Altera Quartus II v13 SP1
