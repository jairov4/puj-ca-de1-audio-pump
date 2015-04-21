module avl_mm_master_export
(clk, reset,
avm_readdata, avm_writedata, avm_read, avm_write, avm_address, avm_waitrequest,
e_readdata, e_writedata, e_read, e_write, e_address, e_waitrequest, e_clk, e_reset);

	input clk;
	input reset;

	input [31:0] avm_readdata;
	output [31:0] avm_writedata;
	output [31:0] avm_address;
	output avm_read;
	output avm_write;
	input avm_waitrequest;

	output e_clk;
	output e_reset;
	output [31:0] e_readdata;
	input [31:0] e_writedata;
	input [31:0] e_address;
	input e_read;
	input e_write;
	output e_waitrequest;

	assign e_clk = clk;
	assign e_reset = reset;

	assign e_readdata = avm_readdata;
	assign e_waitrequest = avm_waitrequest;
	assign avm_writedata = e_writedata;
	assign avm_write = e_write;
	assign avm_read = e_read;
	assign avm_address = e_address;

endmodule