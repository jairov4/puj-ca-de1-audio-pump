## Generated SDC file "puj-ca-de1-audio-pump.out.sdc"

## Copyright (C) 1991-2013 Altera Corporation
## Your use of Altera Corporation's design tools, logic functions 
## and other software and tools, and its AMPP partner logic 
## functions, and any output files from any of the foregoing 
## (including device programming or simulation files), and any 
## associated documentation or information are expressly subject 
## to the terms and conditions of the Altera Program License 
## Subscription Agreement, Altera MegaCore Function License 
## Agreement, or other applicable license agreement, including, 
## without limitation, that your use is for the sole purpose of 
## programming logic devices manufactured by Altera and sold by 
## Altera or its authorized distributors.  Please refer to the 
## applicable agreement for further details.


## VENDOR  "Altera"
## PROGRAM "Quartus II"
## VERSION "Version 13.0.1 Build 232 06/12/2013 Service Pack 1 SJ Web Edition"

## DATE    "Tue Nov 04 23:31:38 2014"

##
## DEVICE  "EP2C20F484C7"
##


#**************************************************************
# Time Information
#**************************************************************

set_time_format -unit ns -decimal_places 3



#**************************************************************
# Create Clock
#**************************************************************

create_clock -name {altera_reserved_tck} -period 100.000 -waveform { 0.000 50.000 } [get_ports {altera_reserved_tck}]
create_clock -name {clk24} -period 41.666 -waveform { 0.000 20.833 } [get_ports { clk_clk }]
create_clock -name {BCLK} -period 83.000 -waveform { 0.000 41.500 } [get_ports {audio0_BCLK}]


#**************************************************************
# Create Generated Clock
#**************************************************************

create_generated_clock -name {inst|pll0|sd1|pll|clk[0]} -source [get_pins {inst|pll0|sd1|pll|inclk[0]}] -duty_cycle 50.000 -multiply_by 25 -divide_by 12 -master_clock {clk24} [get_pins {inst|pll0|sd1|pll|clk[0]}] 
create_generated_clock -name {inst|pll0|sd1|pll|clk[1]} -source [get_pins {inst|pll0|sd1|pll|inclk[0]}] -duty_cycle 50.000 -multiply_by 25 -divide_by 12 -phase -60.000 -master_clock {clk24} [get_pins {inst|pll0|sd1|pll|clk[1]}] 
create_generated_clock -name {inst|pll0|sd1|pll|clk[2]} -source [get_pins {inst|pll0|sd1|pll|inclk[0]}] -duty_cycle 50.000 -multiply_by 1 -divide_by 2 -master_clock {clk24} [get_pins {inst|pll0|sd1|pll|clk[2]}] 


#**************************************************************
# Set Clock Latency
#**************************************************************



#**************************************************************
# Set Clock Uncertainty
#**************************************************************



#**************************************************************
# Set Input Delay
#**************************************************************



#**************************************************************
# Set Output Delay
#**************************************************************



#**************************************************************
# Set Clock Groups
#**************************************************************

set_clock_groups -asynchronous -group [get_clocks {altera_reserved_tck}] 

#**************************************************************
# Set False Path
#**************************************************************

set_false_path -from [get_registers {*|alt_jtag_atlantic:*|jupdate}] -to [get_registers {*|alt_jtag_atlantic:*|jupdate1*}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|rdata[*]}] -to [get_registers {*|alt_jtag_atlantic*|td_shift[*]}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|read}] -to [get_registers {*|alt_jtag_atlantic:*|read1*}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|read_req}] 
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|rvalid}] -to [get_registers {*|alt_jtag_atlantic*|td_shift[*]}]
set_false_path -from [get_registers {*|t_dav}] -to [get_registers {*|alt_jtag_atlantic:*|tck_t_dav}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|user_saw_rvalid}] -to [get_registers {*|alt_jtag_atlantic:*|rvalid0*}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|wdata[*]}] -to [all_registers]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|write}] -to [get_registers {*|alt_jtag_atlantic:*|write1*}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|write_stalled}] -to [get_registers {*|alt_jtag_atlantic:*|t_ena*}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|write_stalled}] -to [get_registers {*|alt_jtag_atlantic:*|t_pause*}]
set_false_path -from [get_registers {*|alt_jtag_atlantic:*|write_valid}] 
set_false_path -to [get_keepers {*altera_std_synchronizer:*|din_s1}]
set_false_path -from [get_keepers {*rdptr_g*}] -to [get_keepers {*ws_dgrp|dffpipe_id9:dffpipe23|dffe24a*}]
set_false_path -from [get_keepers {*delayed_wrptr_g*}] -to [get_keepers {*rs_dgwp|dffpipe_hd9:dffpipe18|dffe19a*}]


#**************************************************************
# Set Multicycle Path
#**************************************************************



#**************************************************************
# Set Maximum Delay
#**************************************************************



#**************************************************************
# Set Minimum Delay
#**************************************************************



#**************************************************************
# Set Input Transition
#**************************************************************

