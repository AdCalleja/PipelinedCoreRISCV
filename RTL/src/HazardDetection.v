module HazardDetection(
    input [31:0]    Instruction,
    input           MemReadID,  //Knows a load is to happen. Stall until it can be forwarded from MEM/WB. Used for branch bubbles.
    input           MemReadEX,  //Same in EX stage
    input           BranchID,   //Knows a Branch needs to be calculates in ID. Stall until 1.R-type op. is made in ALU and forward from EX/MEM 2.Load and stall 2 cycles and forward from MEMWB.
    input [4:0]     EXRd,
    input           PCSrc,
    output reg      PCWrite,
    output reg      IFIDWrite,
    output reg      Stall,
    output reg      IFIDFlush
);
parameter RTYPE = 7'b0110011;
wire [6:0] Opcode;
wire [4:0] Rs1 = Instruction[19:15];
wire [4:0] Rs2 = Instruction[24:20];

assign Opcode = Instruction[6:0];
assign Rs1 = Instruction[19:15];
assign Rs2 = Instruction[24:20];

always@(*)begin : StallingUnit
    if (
    (MemReadEX && ((EXRd == Rs1) || (EXRd == Rs2))) ||                      //ALU Stall
    (BranchID && (Opcode == RTYPE) && ((EXRd == Rs1) || (EXRd == Rs2))) ||  //BranchALU R-TYPE Stall
    (BranchID &&  MemReadID && ((EXRd == Rs1) || (EXRd == Rs2))) ||         //BranchALU Load Stall 1
    (BranchID &&  MemReadEX && ((EXRd == Rs1) || (EXRd == Rs2)))            //BranchALU Load Stall 2
    ) begin
        //Load Stall
        PCWrite = 0;
        IFIDWrite = 0;
        Stall = 1;
    end else begin
        PCWrite = 1;
        IFIDWrite = 1;
        Stall = 0;
    end
end

//Branching control: No prediction unit ASSUMES BRANCH NOT TAKEN
always@(*)begin : FlusingUnit
    if(PCSrc) begin
        IFIDFlush = 1;
    end else begin
        IFIDFlush = 0;
    end
end

endmodule
