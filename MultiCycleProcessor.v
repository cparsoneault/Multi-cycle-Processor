`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    MultiCycleProcessor
//////////////////////////////////////////////////////////////////////////////////
module MultiCycleProcessor #(parameter width = 32, wordLength = 32)
		(input clk, rst,
		 output [3:0] state);

//Register wires
/////////////////////////////////////////////////////////////////////////////////
wire [width-1:0] PCIn, PCOut, instr, Data, A, B, ALUOut;
/*
	PCIn - Value in to PC
	PCOut - Value out of PC
	instr - instruction read from Instruction/Data memory
	Data - same as instr but connects to MUX for Write in to RegFile
	A - RD1 value
	B - RD2 Value
	ALUOut - ALUResult stored
*/
/////////////////////////////////////////////////////////////////////////////////

//Sign Extend wires
/////////////////////////////////////////////////////////////////////////////////
wire [width-1:0] ImmExt, ImmExtPlusOne;
/////////////////////////////////////////////////////////////////////////////////

//Instruction/Data memory wires
/////////////////////////////////////////////////////////////////////////////////
wire [width-1:0] addr;
//	addr - address to read/write to in Memory file
wire [width-1:0] RD;
//	RD - value read from Instruction/Memory at addr
/////////////////////////////////////////////////////////////////////////////////

//RegFile wires
/////////////////////////////////////////////////////////////////////////////////
wire [width-1:0] RD1, RD2, WD3;
/*
	RD1 - Value of Reg at address A1 (instr[25:21])
	RD2 - Value of Reg at address A2 (instr[20:16])
	WD3 - Value to be written in to RegFile at address A3
*/
wire [4:0] A3;
//	A3 - Address to write value in to
/////////////////////////////////////////////////////////////////////////////////

//ALU wires
/////////////////////////////////////////////////////////////////////////////////
wire [width-1:0] ALUResult, SrcA, SrcB; 
/*
	ALUResult - Result of ALU operation
	SrcA - Source A of ALU
	SrcB - Source B of ALU
*/
wire Zero; //Zero flag of ALU
/////////////////////////////////////////////////////////////////////////////////

//Control Unit outputs
/////////////////////////////////////////////////////////////////////////////////
wire IorD, MemWrite, IRWrite, RegDst, MemtoReg, RegWrite;
/*
	IorD - input in to MUX that determines whether PC(0) or ALUOut(1) is sent to instruction/Data mem
	MemWrite - Enables write to Instr/Data Mem
	IRWrite - enable write to Reg that holds instruction/data mem output
	RegDst - Input to MUX for which destination in RegFile will be written to, instr[20:16](0), or instr[15:11](1)
	MemtoReg - Input to MUX that selects whether Data (1) or ALUResult(0) writes to RegFile
	RegWrite - Enables write to RegFile
*/


wire ALUSrcA, Branch, PCWrite;
/*
	ALUSrcA - Input to MUX to select if PC (0) or RegFile (1) goes to ALU
	Branch - sets whether the instruction is Branch or not
	PCWrite - Sets if a value must be written to the PC
*/

wire [1:0] PCSrc, ALUSrcB;
/*
	PCSrc - Input to MUX to select if ALUResult (00), ALUOut(01) or PCJump (10) goes to PC
	ALUSrcB - Input to Mux to select whether B(00), 1(01), SignImm (10), or SignImm + 1 (11)
*/

wire [2:0] ALUControl;
//	ALUControl - Input to ALU Select

wire andOut, PCEn;
//Output of and and or gates for determining whether to write to PC

and a1 (andOut, Branch, Zero); //Zero is an output from the ALU
or o1 (PCEn, andOut, PCWrite);
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//Control Unit

Controller #(.codeWidth(6)) controlUnit 
			(.OpCode(instr[31:26]), .Funct(instr[5:0]),
			 .clk(clk), .rst(rst),
			 .DecodeOut({MemtoReg, RegDst, IorD, ALUSrcA, IRWrite, MemWrite, PCWrite, Branch, RegWrite, ALUSrcB, PCSrc}),
			 .ALUControlOut(ALUControl),
			 .currentState(state));
/*
.MemtoReg(DecodeOut[MainDecodeOut-1]), .RegDst(DecodeOut[MainDecodeOut-2]), .IorD(DecodeOut[MainDecodeOut-3]),
					 .ALUSrcA(DecodeOut[MainDecodeOut-4]), .IRwrite(DecodeOut[MainDecodeOut-5]), .MemWrite(DecodeOut[MainDecodeOut-6]),
					 .PCWrite(DecodeOut[MainDecodeOut-7]), .Branch(DecodeOut[MainDecodeOut-8]), .RegWrite(DecodeOut[MainDecodeOut-9]),
					 .ALUSrcB(DecodeOut[MainDecodeOut-10:MainDecodeOut-11]), .PCSrc(DecodeOut[MainDecodeOut-12:MainDecodeOut-13])
*/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//ALU
ALU #(.width(width)) ALU1
				(.op1(SrcA), .op2(SrcB),
				 .sel(ALUControl),
				 .zero(Zero),
				 .out(ALUResult));
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//RegFile
RegisterFile #(.width(width), .wordLength(wordLength)) RegFile
			(.addr1(instr[25:21]), .addr2(instr[20:16]), .addr3(A3),
			 .clk(clk), .write(RegWrite), .rst(rst),
			 .writeValue(WD3),
			 .r1(RD1), .r2(RD2));
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//Sign Extend
SignExtend #(.in(width/2), .out(width)) SignExt
			(.din(instr[15:0]),
			 .dout(ImmExt));
			 
inc #(.width(width)) incrementer
			(.in(ImmExt),
			 .out(ImmExtPlusOne));
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//Instruction/Data Memory
DataMemory #(.width(width), .wordLength(wordLength)) InstructionDataMem
				(.clk(clk), .write(MemWrite),
				 .wIn(B),
				 .din(addr[4:0]),
				 .dout(RD));
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//Registers
//Program Counter
nBitWriteEnReg #(.width(width)) ProgramCounter 
							(.din(PCIn),
							.clk(clk), .rst(rst), .en(PCEn),
							.dout(PCOut));
//Instruction register
nBitWriteEnReg #(.width(width)) InstructionReg
							(.din(RD),
							.clk(clk), .rst(rst), .en(IRWrite),
							.dout(instr));
//Data Register
nbitReg #(.width(width)) DataReg
							(.din(RD),
							.clk(clk), .rst(rst),
							.dout(Data));
//A reg
nbitReg #(.width(width)) AReg
							(.din(RD1),
							.clk(clk), .rst(rst),
							.dout(A));
//B reg
nbitReg #(.width(width)) BReg
							(.din(RD2),
							.clk(clk), .rst(rst),
							.dout(B));
//ALUResult reg
nbitReg #(.width(width)) ALUReg
							(.din(ALUResult),
							.clk(clk), .rst(rst),
							.dout(ALUOut));
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//Muxs
//IorD Mux
Mux #(.width(width)) IorDMux
				(.sel(IorD),
				 .in1(PCOut), .in2(ALUOut),
				 .out(addr));
//RegDst Mux
Mux #(.width(5)) RegDstMux
				(.sel(RegDst),
				 .in1(instr[20:16]), .in2(instr[15:11]),
				 .out(A3));
//MemtoReg Mux
Mux #(.width(width)) MemtoRegMux
				(.sel(MemtoReg),
				 .in1(ALUOut), .in2(Data),
				 .out(WD3));
//ALUSrcA Mux
Mux #(.width(width)) ALUSrcAMux
				(.sel(ALUSrcA),
				 .in1(PCOut), .in2(A),
				 .out(SrcA));
//PCSrc Mux
Mux3to1 #(.width(width)) PCSrcMux
			(.in1(ALUResult), .in2(ALUOut), .in3({6'b000000,instr[25:0]}),
			 .sel(PCSrc),
			 .dout(PCIn));
//ALUSrcB Mux
Mux4to1 #(.width(width)) ALUSrcBMux
			(.in1(B), .in2(32'b01), .in3(ImmExt), .in4(ImmExtPlusOne),
			 .sel(ALUSrcB),
			 .dout(SrcB));
/////////////////////////////////////////////////////////////////////////////////
endmodule

module tb_MultiCycle;
	reg clk, rst;
	wire [3:0] state;
	parameter w = 32;
	parameter wL = 32;
	
	MultiCycleProcessor #(.width(w), .wordLength(wL)) m1
				(.clk(clk), .rst(rst), .state(state));
				
	initial clk = 0;
	always #5 clk = ~clk;
	
	initial begin
		rst = 1;
		#6 rst = 0;
	end

endmodule
