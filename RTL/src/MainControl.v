//! Main control unit. Generate control lanes based on the Opcode selected
//! and ALUOp to ALUControl.v as a 2 levels control abstraction.
module MainControl(
    input [31:0]     Instruction,     //! Instruction
    output reg      RegWrite,   //! Enable Register File WriteEn
    output reg      MemtoReg,   //! Select the source to Register File WriteData between **ALU Result / Data Memory**
    output reg      Branch,     //! Select new branching program counter (if ALU also sets zero lane)
    output reg      MemWrite,   //! Enable Data Memory write
    output reg      MemRead,    //! Enable Data Memory read
    output reg      ALUSrc,     //! Select the source to ALU input ***b*** between **RegisterFile / Immediate**
    output reg [4:0] ALUCtrl      //! Previous instruction decodification to simplify ALUControl.
);
wire [6:0] Opcode = Instruction[6:0];
wire Func7 = Instruction[30];
wire [2:0] Func3 = Instruction[14:12];

always@(*)begin : OpcodeDecode
    case(Opcode)
    //R-format
    7'b0110011:  begin
        ALUSrc = 0;
        MemtoReg = 0;
        RegWrite = 1;
        MemRead = 0;
        MemWrite = 0;
        Branch = 0;
        case(Func3)
        3'b000: case(Func7)
                1'b0: ALUCtrl = 0;  //ADD
                1'b1: ALUCtrl = 1;  //SUB
                endcase
        3'b001: ALUCtrl = 2;        //SLL
        3'b010: ALUCtrl = 3;        //SLT
        3'b011: ALUCtrl = 4;        //SLTU
        3'b100: ALUCtrl = 5;        //XOR
        3'b101: case(Func7)
                1'b0: ALUCtrl = 6;  //SRL
                1'b1: ALUCtrl = 7;  //SRA
                endcase
        3'b110: ALUCtrl = 8;       //OR
        3'b111: ALUCtrl = 9;       //AND
        default: ALUCtrl = 0;
        endcase
    end
    //lw
    7'b0000011:  begin
        ALUSrc = 1;
        MemtoReg = 1;
        RegWrite = 1;
        MemRead = 1;
        MemWrite = 0;
        Branch = 0;
        ALUCtrl = 0;    //Sum to get datamem. dir
    end
    //sw
    7'b0100011:  begin
        ALUSrc = 1;
        MemtoReg = 0; //x
        RegWrite = 0;
        MemRead = 0;
        MemWrite = 1;
        Branch = 0;
        ALUCtrl = 0;    //Sum to get datamem. dir
    end
    //BRANCH
    7'b1100011:  begin
        ALUSrc = 0;
        MemtoReg = 0; //x
        RegWrite = 0;
        MemRead = 0;
        MemWrite = 0;
        Branch = 1;
        case(Func3)
        3'b000: ALUCtrl = 26; //BEQ
        3'b001: ALUCtrl = 27; //BNE
        3'b100: ALUCtrl = 28; //BLT
        3'b101: ALUCtrl = 29; //BGE
        3'b110: ALUCtrl = 30; //BLTU
        3'b111: ALUCtrl = 31; //BGEU
        default: ALUCtrl = 0;
        endcase
    end
    default:  begin
        ALUSrc = 0;
        MemtoReg = 0;
        RegWrite = 0;
        MemRead = 0;
        MemWrite = 0;
        Branch = 0;
        ALUCtrl = 0;
    end
    endcase
end

endmodule
