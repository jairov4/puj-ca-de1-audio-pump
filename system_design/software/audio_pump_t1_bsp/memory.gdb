# memory.gdb - GDB memory region definitions
#
# Machine generated for CPU 'nios0' in SOPC Builder design 'system_design'
# SOPC Builder design path: ../../system_design.sopcinfo
#
# Generated: Fri May 15 10:01:42 COT 2015

# DO NOT MODIFY THIS FILE
#
# Changing this file will have subtle consequences
# which will almost certainly lead to a nonfunctioning
# system. If you do modify this file, be aware that your
# changes will be overwritten and lost when this file
# is generated again.
#
# DO NOT MODIFY THIS FILE

# License Agreement
#
# Copyright (c) 2008
# Altera Corporation, San Jose, California, USA.
# All rights reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
#
# This agreement shall be governed in all respects by the laws of the State
# of California and by the laws of the United States of America.

# Define memory regions for each memory connected to the CPU.
# The cache attribute is specified which improves GDB performance
# by allowing GDB to cache memory contents on the host.

# sdram0
memory 0x800000 0x1000000 cache

# sram0
memory 0x1080000 0x1100000 cache

# onchip_memory2_0
memory 0x1200000 0x1204000 cache
