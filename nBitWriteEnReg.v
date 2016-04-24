`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    nBitWriteEnReg
//////////////////////////////////////////////////////////////////////////////////
module nBitWriteEnReg #(parameter width = 32)
							(input [width-1:0] din,
							input clk, rst, en,
							output reg [width-1:0] dout);
	always@(posedge clk) begin
		if (rst) dout <= 0;
		else if (en) dout <= din;
		else dout <= dout;
	end
endmodule

module tb_nBitWriteEnReg;
	parameter w = 32;
	reg [w-1:0] in;
	reg clk, rst, en;
	wire [w-1:0] out;

	nBitWriteEnReg #(.width(w)) t1 (.din(in), .clk(clk), .rst(rst), .en(en), .dout(out));

	initial clk = 0;
	always #5 clk = ~clk;

	initial begin
		in = 25; rst = 1; en = 0;
		#6 rst = 0;
		#4 en = 1;
		#50 in = 1;
		#10 en = 0;
		#50 in = 15;
	end
endmodule
