`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    counter
//////////////////////////////////////////////////////////////////////////////////
module counter #(parameter width = 32)
		(input [width-1:0] din,
		 output reg [width-1:0] dout);

	always@* dout <= din + 1;

endmodule
