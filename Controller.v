`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    Controller
//////////////////////////////////////////////////////////////////////////////////
module Controller#(parameter codeWidth = 6, MainDecodeOut = 13)
			(input [codeWidth-1:0] OpCode, Funct,
			 input clk, rst,
			 output [MainDecodeOut-1:0] DecodeOut,
			 output [2:0] ALUControlOut,
			 output [3:0] currentState);
			 
	wire [1:0] ALUOpIn;
	
	MainDecoder #(.opWidth(codeWidth)) m1
					(.opCode(OpCode), .clk(clk), .rst(rst), .ALUOp(ALUOpIn),
					 .MemtoReg(DecodeOut[MainDecodeOut-1]), .RegDst(DecodeOut[MainDecodeOut-2]), .IorD(DecodeOut[MainDecodeOut-3]),
					 .ALUSrcA(DecodeOut[MainDecodeOut-4]), .IRwrite(DecodeOut[MainDecodeOut-5]), .MemWrite(DecodeOut[MainDecodeOut-6]),
					 .PCWrite(DecodeOut[MainDecodeOut-7]), .Branch(DecodeOut[MainDecodeOut-8]), .RegWrite(DecodeOut[MainDecodeOut-9]),
					 .ALUSrcB(DecodeOut[MainDecodeOut-10:MainDecodeOut-11]), .PCSrc(DecodeOut[MainDecodeOut-12:MainDecodeOut-13]),
					 .currentState(currentState)
					 );
					 
	ALUDecoder #(.opWidth(codeWidth)) a1
						(.ALUDecodeIn(ALUOpIn), .functionCode(Funct),
						 .ALUControl(ALUControlOut));

endmodule

module MainDecoder #(parameter opWidth = 6, ALUOpWidth = 2)
					(input [opWidth-1:0] opCode,
					 input clk, rst,
					 output reg [ALUOpWidth-1:0] ALUOp,
					 output reg MemtoReg, RegDst, IorD, ALUSrcA, IRwrite,
									MemWrite, PCWrite, Branch, RegWrite,
					 output reg [1:0] ALUSrcB, PCSrc,
					 output [3:0] currentState
					 );
					 
	parameter rType = 6'b000000;
	parameter addi = 6'b001000;
	parameter lw = 6'b100011;
	parameter sw = 6'b101011;
	parameter beq = 6'b000100;
	parameter j = 6'b000010;
	reg [3:0] state = 0;
	
	//states
	parameter s0 = 0; parameter s1 = 1; parameter s2 = 2; parameter s3 = 3;
	parameter s4 = 4; parameter s5 = 5; parameter s6 = 6; parameter s7 = 7;
	parameter s8 = 8; parameter s9 = 9; parameter s10 = 10; parameter s11 = 11;
	
	assign currentState = state;
					 
	always@(posedge clk) begin
		if (rst) state <= s0;
		else
			#1 case (state)
				s0: begin
						ALUOp <= 2'b00;
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 0;
						IRwrite <= 1;
						MemWrite <= 0;
						PCWrite <= 1;
						Branch <= 0;
						RegWrite <= 0;
						ALUSrcB <= 2'b01;
						PCSrc <= 2'b00;
						state <= s1;
					end
				s1: begin
						ALUOp <= 2'b00;
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 0;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 0;
						ALUSrcB <= 2'b11;
						case (opCode)
							rType: state <= s6;
							addi: state <= s9;
							lw: state <= s2;
							sw: state <= s2;
							beq: state <= s8;
							j: state <= s11;
							default: state <= 0;
						endcase
					end
				s2: begin //s2 only if LW or SW
						ALUOp <= 2'b00;
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 1;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 0;
						ALUSrcB <= 2'b10;
						case (opCode)
							lw: state <= s3;
							sw: state <= s5;
							default: ;
						endcase
					end
				s3: begin //s3 only if LW
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 1;
						ALUSrcA <= 0;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 0;
						state <= s4;
					end
				s4: begin
						MemtoReg <= 1;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 0;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 1;
						state <= s0; //end of LW
					end
				s5: begin //s5 only if SW
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 1;
						ALUSrcA <= 0;
						IRwrite <= 0;
						MemWrite <= 1;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 0;
						state <= s0; //end of SW
					end
				s6: begin //only if rType
						ALUOp <= 2'b10; //tells ALU to check funct field of instruction
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 1;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 0;
						ALUSrcB <= 2'b00;
						state <= s7;
					end
				s7: begin
						MemtoReg <= 0;
						RegDst <= 1;
						IorD <= 0;
						ALUSrcA <= 0;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 1;
						state <= s0; //end of rType
					end
				s8: begin //only if beq
						ALUOp <= 2'b01;
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 1;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 1;
						RegWrite <= 0;
						ALUSrcB <= 2'b00;
						PCSrc <= 2'b01;
						state <= s0; //end beq
					end
				s9: begin //only if addi
						ALUOp <= 2'b00;
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 1;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 0;
						ALUSrcB <= 2'b10;
						state <= s10;
					end
				s10: begin
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 0;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 0;
						Branch <= 0;
						RegWrite <= 1;
						state <= s0; //end addi
					end
				s11: begin //only if j
						MemtoReg <= 0;
						RegDst <= 0;
						IorD <= 0;
						ALUSrcA <= 0;
						IRwrite <= 0;
						MemWrite <= 0;
						PCWrite <= 1;
						Branch <= 0;
						RegWrite <= 0;
						PCSrc <= 2'b10;
						state <= s0; //end j
					end
				default: state <= s0;
			endcase
	end
endmodule

module ALUDecoder #(parameter opWidth = 6, ALUOpWidth = 2)
						(input [ALUOpWidth-1:0] ALUDecodeIn,
						 input [opWidth-1:0] functionCode,
						 output reg [2:0] ALUControl);
	//ALUDecodeIn start					 
	parameter addOp = 2'b00;
	parameter subOp = 2'b01;
	parameter ALUOp = 2'b10;
	//ALUDecodeIn end
	
	//functionCode start
	parameter funcAdd = 6'b100000;
	parameter funcSub = 6'b100010;
	parameter funcSlt = 6'b101010;
	parameter funcAnd = 6'b100100;
	parameter funcOr = 6'b100101;
	//functionCode end
	
	//ALUControl start
	parameter ALUand = 3'b000; //a & b
	parameter ALUor = 3'b001;	// a | b
	parameter ALUadd = 3'b010;	//a + b
	parameter ALUandnot = 3'b100; //a&~b
	parameter ALUornot = 3'b101; //a|~b
	parameter ALUsub = 3'b110;	//a-b
	parameter ALUslt = 3'b111;	//set less than. Output 1 if a < b, else output 0
	//ALUControl end
	
	always@* begin
		case (ALUDecodeIn)
			addOp: ALUControl <= ALUadd;
			subOp: ALUControl <= ALUsub;
			ALUOp: begin 
						case (functionCode)
							funcAnd: ALUControl <= ALUand;
							funcOr: ALUControl <= ALUor;
							funcAdd: ALUControl <= ALUadd;
							funcSub: ALUControl <= ALUsub;
							funcSlt: ALUControl <= ALUslt;
							default: ALUControl <= ALUand;
						endcase
					 end
			default: ALUControl <= ALUand;
		endcase
	end
						 
endmodule

module tb_Controller;
	parameter addi = 6'b001000;
	parameter lw = 6'b100011;
	parameter sw = 6'b101011;
	parameter beq = 6'b000100;
	parameter j = 6'b000010;
	parameter rType = 6'b000000;
	
	parameter funcAdd = 6'b100000;
	parameter funcSub = 6'b100010;
	parameter funcSlt = 6'b101010;
	parameter funcAnd = 6'b100100;
	parameter funcOr = 6'b100101;
	
	parameter c = 6;
	parameter m = 13;
	reg [c-1:0] opIn, functIn;
	reg clk, rst;
	wire [2:0] out;
	wire [12:0] decoded;
	wire [3:0] state;
	
	Controller#(.codeWidth(c), .MainDecodeOut(m)) c1
			(.OpCode(opIn), .Funct(functIn),
			 .clk(clk), .rst(rst),
			 .DecodeOut(decoded),
			 .ALUControlOut(out),
			 .currentState(state)
			 );
	
	initial clk = 0;
	always #10 clk = ~clk;
	
	initial begin
	rst = 1; opIn = addi;
	#11 rst = 0;
	end

endmodule
