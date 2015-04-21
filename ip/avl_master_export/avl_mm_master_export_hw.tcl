# TCL File Generated by Component Editor 13.0sp1
# Sun Nov 02 14:34:11 COT 2014
# DO NOT MODIFY


# 
# avl_mm_master_export "AvalonMM Master Export" v1.0
# Jairo Andres Velasco 2014.11.02.14:34:11
# Export a simple AvalonMM master interface as conduit
# 

# 
# request TCL package from ACDS 13.1
# 
package require -exact qsys 13.1


# 
# module avl_mm_master_export
# 
set_module_property DESCRIPTION "Export a simple AvalonMM master interface as conduit"
set_module_property NAME avl_mm_master_export
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property GROUP "Bridges and Adapters/Memory Mapped"
set_module_property AUTHOR "Jairo Andres Velasco"
set_module_property DISPLAY_NAME "AvalonMM Master Export"
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property ANALYZE_HDL AUTO
set_module_property REPORT_TO_TALKBACK false
set_module_property ALLOW_GREYBOX_GENERATION false


# 
# file sets
# 
add_fileset QUARTUS_SYNTH QUARTUS_SYNTH "" ""
set_fileset_property QUARTUS_SYNTH TOP_LEVEL avl_mm_master_export
set_fileset_property QUARTUS_SYNTH ENABLE_RELATIVE_INCLUDE_PATHS false
add_fileset_file avl_mm_master_export.v VERILOG PATH avl_mm_master_export.v TOP_LEVEL_FILE


# 
# parameters
# 


# 
# display items
# 


# 
# connection point clock
# 
add_interface clock clock end
set_interface_property clock clockRate 0
set_interface_property clock ENABLED true
set_interface_property clock EXPORT_OF ""
set_interface_property clock PORT_NAME_MAP ""
set_interface_property clock SVD_ADDRESS_GROUP ""

add_interface_port clock clk clk Input 1


# 
# connection point reset
# 
add_interface reset reset end
set_interface_property reset associatedClock clock
set_interface_property reset synchronousEdges DEASSERT
set_interface_property reset ENABLED true
set_interface_property reset EXPORT_OF ""
set_interface_property reset PORT_NAME_MAP ""
set_interface_property reset SVD_ADDRESS_GROUP ""

add_interface_port reset reset reset Input 1


# 
# connection point exp_avl_mm
# 
add_interface exp_avl_mm conduit end
set_interface_property exp_avl_mm associatedClock ""
set_interface_property exp_avl_mm associatedReset reset
set_interface_property exp_avl_mm ENABLED true
set_interface_property exp_avl_mm EXPORT_OF ""
set_interface_property exp_avl_mm PORT_NAME_MAP ""
set_interface_property exp_avl_mm SVD_ADDRESS_GROUP ""

add_interface_port exp_avl_mm e_readdata export Output 32
add_interface_port exp_avl_mm e_writedata export Input 32
add_interface_port exp_avl_mm e_read export Input 1
add_interface_port exp_avl_mm e_write export Input 1
add_interface_port exp_avl_mm e_address export Input 32
add_interface_port exp_avl_mm e_waitrequest export Output 1
add_interface_port exp_avl_mm e_clk export Output 1
add_interface_port exp_avl_mm e_reset export Output 1


# 
# connection point avalon_master
# 
add_interface avalon_master avalon start
set_interface_property avalon_master addressUnits SYMBOLS
set_interface_property avalon_master associatedClock clock
set_interface_property avalon_master associatedReset reset
set_interface_property avalon_master bitsPerSymbol 8
set_interface_property avalon_master burstOnBurstBoundariesOnly false
set_interface_property avalon_master burstcountUnits WORDS
set_interface_property avalon_master doStreamReads false
set_interface_property avalon_master doStreamWrites false
set_interface_property avalon_master holdTime 0
set_interface_property avalon_master linewrapBursts false
set_interface_property avalon_master maximumPendingReadTransactions 0
set_interface_property avalon_master readLatency 0
set_interface_property avalon_master readWaitTime 1
set_interface_property avalon_master setupTime 0
set_interface_property avalon_master timingUnits Cycles
set_interface_property avalon_master writeWaitTime 0
set_interface_property avalon_master ENABLED true
set_interface_property avalon_master EXPORT_OF ""
set_interface_property avalon_master PORT_NAME_MAP ""
set_interface_property avalon_master SVD_ADDRESS_GROUP ""

add_interface_port avalon_master avm_readdata readdata Input 32
add_interface_port avalon_master avm_writedata writedata Output 32
add_interface_port avalon_master avm_read read Output 1
add_interface_port avalon_master avm_write write Output 1
add_interface_port avalon_master avm_address address Output 32
add_interface_port avalon_master avm_waitrequest waitrequest Input 1

