`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    incrementer
//////////////////////////////////////////////////////////////////////////////////
module inc #(parameter width = 32)
			(input [width-1:0] in,
			 output reg [width-1:0] out);

always@* out <= in + 1;

endmodule

module tb_inc;
	parameter w = 32;
	reg [w-1:0] in;
	wire [w-1:0] out;

	inc inc1 (.in(in), .out(out));

	initial begin
		in = 1;
		#5 in = 2;
		#5 in = 25;
	end
endmodule
