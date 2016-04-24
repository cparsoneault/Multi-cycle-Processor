`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    Mux4to1
//////////////////////////////////////////////////////////////////////////////////
module Mux4to1 #(parameter width = 32)
			(input [width-1:0] in1, in2, in3, in4,
			 input [1:0] sel,
			 output reg [width-1:0] dout);

	always@* begin
		case (sel)
			2'b00: dout <= in1;
			2'b01: dout <= in2;
			2'b10: dout <= in3;
			2'b11: dout <= in4;
			default: dout <= 0;
		endcase
	end

endmodule

module tb_mux4to1;
	parameter w = 32;
	
	reg [1:0]select;
	reg [w-1:0] in1, in2, in3, in4;
	wire [w-1:0] out;
	
	Mux4to1 #(.width(w)) m1 (.in1(in1), .in2(in2), .in3(in3), .in4(in4), .sel(select), .dout(out));
	
	initial begin
		in1 = 2;
		in2 = 3;
		in3 = 4;
		in4 = 5;
		select = 0;
		#20 select = 1;
		#20 select = 2;
		#20 select = 3;
	end

endmodule
