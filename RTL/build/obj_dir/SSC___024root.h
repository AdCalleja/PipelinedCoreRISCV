// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See SSC.h for the primary calling header

#ifndef VERILATED_SSC___024ROOT_H_
#define VERILATED_SSC___024ROOT_H_  // guard

#include "verilated.h"

class SSC__Syms;
VL_MODULE(SSC___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(original_clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(leds,7,0);
    CData/*0:0*/ PipelinedCore__DOT__PCSrc;
    CData/*0:0*/ PipelinedCore__DOT__IFIDWrite;
    CData/*0:0*/ PipelinedCore__DOT__IFIDRst;
    CData/*0:0*/ PipelinedCore__DOT__Stall;
    CData/*0:0*/ PipelinedCore__DOT__RegWriteIDtoStall;
    CData/*0:0*/ PipelinedCore__DOT__MemWriteIDtoStall;
    CData/*0:0*/ PipelinedCore__DOT__MemtoRegID;
    CData/*0:0*/ PipelinedCore__DOT__BranchID;
    CData/*0:0*/ PipelinedCore__DOT__MemReadID;
    CData/*0:0*/ PipelinedCore__DOT__ALUSrcID;
    CData/*4:0*/ PipelinedCore__DOT__ALUCtrlID;
    CData/*4:0*/ PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1;
    CData/*4:0*/ PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2;
    CData/*4:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd;
    CData/*0:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite;
    CData/*0:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemtoReg;
    CData/*0:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemWrite;
    CData/*0:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead;
    CData/*0:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUSrc;
    CData/*4:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl;
    CData/*4:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1;
    CData/*4:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2;
    CData/*4:0*/ PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd;
    CData/*0:0*/ PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite;
    CData/*0:0*/ PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemtoReg;
    CData/*0:0*/ PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemWrite;
    CData/*0:0*/ PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead;
    CData/*4:0*/ PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd;
    CData/*0:0*/ PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite;
    CData/*0:0*/ PipelinedCore__DOT__MEMWBRegsPPC__DOT__regMemtoReg;
    CData/*0:0*/ __Vclklast__TOP__original_clk;
    IData/*31:0*/ PipelinedCore__DOT__Instruction;
    IData/*31:0*/ PipelinedCore__DOT__PCNext;
    IData/*31:0*/ PipelinedCore__DOT__ReadData1;
    IData/*31:0*/ PipelinedCore__DOT__ReadData2;
    IData/*31:0*/ PipelinedCore__DOT__Immediate;
    IData/*31:0*/ PipelinedCore__DOT__ALUOutput;
    IData/*31:0*/ PipelinedCore__DOT__DataOutput;
    IData/*31:0*/ PipelinedCore__DOT__WriteData;
    IData/*31:0*/ PipelinedCore__DOT__PCtemp;
    IData/*31:0*/ PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC;
    IData/*31:0*/ PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction;
    IData/*31:0*/ PipelinedCore__DOT__ImmGenPPC__DOT__Simm;
    IData/*31:0*/ PipelinedCore__DOT__ImmGenPPC__DOT__Bimm;
    IData/*31:0*/ PipelinedCore__DOT__ImmGenPPC__DOT__Uimm;
    IData/*31:0*/ PipelinedCore__DOT__ImmGenPPC__DOT__Jimm;
    IData/*31:0*/ PipelinedCore__DOT__ImmGenPPC__DOT__Iimm;
    IData/*31:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1;
    IData/*31:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2;
    IData/*31:0*/ PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate;
    IData/*31:0*/ PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput;
    IData/*31:0*/ PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2;
    IData/*31:0*/ PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput;
    IData/*31:0*/ PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput;
    VlUnpacked<IData/*31:0*/, 32> PipelinedCore__DOT__RegisterFilePPC__DOT__bank;
    VlUnpacked<IData/*31:0*/, 16> PipelinedCore__DOT__DataMemoryPPC__DOT__ram;

    // INTERNAL VARIABLES
    SSC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    SSC___024root(const char* name);
    ~SSC___024root();
    VL_UNCOPYABLE(SSC___024root);

    // INTERNAL METHODS
    void __Vconfigure(SSC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard