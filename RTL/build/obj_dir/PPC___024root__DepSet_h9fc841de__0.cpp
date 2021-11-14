// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See PPC.h for the primary calling header

#include "verilated.h"

#include "PPC___024root.h"

extern const VlUnpacked<IData/*31:0*/, 256> PPC__ConstPool__TABLE_hc69761c0_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_h4987ea19_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_hddf9a7d3_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_h7ae1d88f_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_he1b5f03a_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_h251d302e_0;
extern const VlUnpacked<CData/*4:0*/, 2048> PPC__ConstPool__TABLE_hdd80e9ff_0;

VL_INLINE_OPT void PPC___024root___sequent__TOP__1(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ PipelinedCore__DOT__ALUA;
    IData/*31:0*/ PipelinedCore__DOT__ALUB;
    CData/*1:0*/ PipelinedCore__DOT__ForwardBranchA;
    CData/*1:0*/ PipelinedCore__DOT__ForwardBranchB;
    IData/*31:0*/ PipelinedCore__DOT__BranchA;
    IData/*31:0*/ PipelinedCore__DOT__BranchB;
    CData/*1:0*/ PipelinedCore__DOT__ForwardALUA;
    CData/*1:0*/ PipelinedCore__DOT__ForwardALUB;
    CData/*4:0*/ PipelinedCore__DOT__ImmGenPPC__DOT__Opcode;
    CData/*7:0*/ __Vtableidx1;
    SData/*10:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v0;
    CData/*4:0*/ __Vdlyvdim0__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32;
    IData/*31:0*/ __Vdlyvval__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32;
    CData/*3:0*/ __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0;
    // Body
    __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0 = 0U;
    __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v0 = 0U;
    __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1 = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl = 0U;
    } else {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate 
            = vlSelf->PipelinedCore__DOT__Immediate;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1 
            = vlSelf->PipelinedCore__DOT__ReadData1;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl 
            = vlSelf->PipelinedCore__DOT__ALUCtrlID;
    }
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUSrc 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__ALUSrcID));
    if (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemWrite) {
        __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0 
            = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2;
        __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0 = 1U;
        __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0 
            = (0xfU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                       >> 2U));
    }
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regMemtoReg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemtoReg));
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput = 0U;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2 = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1 = 0U;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd = 0U;
    } else {
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput 
            = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput 
            = vlSelf->PipelinedCore__DOT__DataOutput;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2 
            = (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                        >> 0x14U));
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1 
            = (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                        >> 0xfU));
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd 
            = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd;
    }
    if (vlSelf->PipelinedCore__DOT__IFIDRst) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC = 0U;
    } else if (vlSelf->PipelinedCore__DOT__IFIDWrite) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC 
            = vlSelf->PipelinedCore__DOT__PCtemp;
    }
    if (vlSelf->rst) {
        __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v0 = 1U;
    } else if (vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) {
        if ((0U != (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                             >> 7U)))) {
            __Vdlyvval__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 
                = vlSelf->PipelinedCore__DOT__WriteData;
            __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 = 1U;
            __Vdlyvdim0__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 
                = (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                            >> 7U));
        }
    }
    if (__Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0) {
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram[__Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0] 
            = __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram__v0;
    }
    if (__Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v0) {
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[1U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[2U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[3U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[4U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[5U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[6U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[7U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[8U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[9U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0xaU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0xbU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0xcU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0xdU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0xeU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0xfU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x10U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x11U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x12U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x13U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x14U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x15U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x16U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x17U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x18U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x19U] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x1aU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x1bU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x1cU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x1dU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x1eU] = 0U;
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[0x1fU] = 0U;
    }
    if (__Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32) {
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[__Vdlyvdim0__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32] 
            = __Vdlyvval__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32;
    }
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2 
        = vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2;
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemWrite 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemWrite));
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemtoReg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemtoReg));
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
        = vlSelf->PipelinedCore__DOT__ALUOutput;
    vlSelf->PipelinedCore__DOT__WriteData = ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regMemtoReg)
                                              ? vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput
                                              : vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd 
        = vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd;
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__PCtemp = 0U;
    } else if ((1U & (~ (((((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead) 
                            & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                               | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                  == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2)))) 
                           | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                               & (0x33U == (0x7fU & vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction))) 
                              & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                  == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                 | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                    == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2))))) 
                          | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                              & (IData)(vlSelf->PipelinedCore__DOT__MemReadID)) 
                             & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                 == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                   == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2))))) 
                         | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                             & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead)) 
                            & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                               | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                  == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2)))))))) {
        vlSelf->PipelinedCore__DOT__PCtemp = vlSelf->PipelinedCore__DOT__PCNext;
    }
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite));
    vlSelf->leds = ((0xfeU & (IData)(vlSelf->leds)) 
                    | (IData)((0U != (0x1010101U & vlSelf->PipelinedCore__DOT__WriteData))));
    vlSelf->leds = ((0xfdU & (IData)(vlSelf->leds)) 
                    | ((IData)((0U != (0x2020202U & vlSelf->PipelinedCore__DOT__WriteData))) 
                       << 1U));
    vlSelf->leds = ((0xfbU & (IData)(vlSelf->leds)) 
                    | ((IData)((0U != (0x4040404U & vlSelf->PipelinedCore__DOT__WriteData))) 
                       << 2U));
    vlSelf->leds = ((0xf7U & (IData)(vlSelf->leds)) 
                    | ((IData)((0U != (0x8080808U & vlSelf->PipelinedCore__DOT__WriteData))) 
                       << 3U));
    vlSelf->leds = ((0xefU & (IData)(vlSelf->leds)) 
                    | ((IData)((0U != (0x10101010U 
                                       & vlSelf->PipelinedCore__DOT__WriteData))) 
                       << 4U));
    vlSelf->leds = ((0xdfU & (IData)(vlSelf->leds)) 
                    | ((IData)((0U != (0x20202020U 
                                       & vlSelf->PipelinedCore__DOT__WriteData))) 
                       << 5U));
    vlSelf->leds = ((0xbfU & (IData)(vlSelf->leds)) 
                    | ((IData)((0U != (0x40404040U 
                                       & vlSelf->PipelinedCore__DOT__WriteData))) 
                       << 6U));
    vlSelf->leds = ((0x7fU & (IData)(vlSelf->leds)) 
                    | ((IData)((0U != (0x80808080U 
                                       & vlSelf->PipelinedCore__DOT__WriteData))) 
                       << 7U));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->PipelinedCore__DOT__ReadData2);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemWrite 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->PipelinedCore__DOT__Stall)
                                              ? 0U : (IData)(vlSelf->PipelinedCore__DOT__MemWriteIDtoStall))));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemtoReg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__MemtoRegID));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                 >> 7U)));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__MemReadID));
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite));
    if (vlSelf->PipelinedCore__DOT__IFIDRst) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction = 0U;
    } else if (vlSelf->PipelinedCore__DOT__IFIDWrite) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
            = vlSelf->PipelinedCore__DOT__Instruction;
    }
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->PipelinedCore__DOT__Stall)
                                              ? 0U : (IData)(vlSelf->PipelinedCore__DOT__RegWriteIDtoStall))));
    PipelinedCore__DOT__ForwardALUB = ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUSrc)
                                        ? 3U : (((((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite) 
                                                   & (0U 
                                                      != (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd))) 
                                                  & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2))) 
                                                 & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2)))
                                                 ? 1U
                                                 : 
                                                (((((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) 
                                                    & (0U 
                                                       != (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd))) 
                                                   & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                      == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2))) 
                                                  & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2)))
                                                  ? 2U
                                                  : 0U)));
    PipelinedCore__DOT__ForwardALUA = (((((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite) 
                                          & (0U != (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd))) 
                                         & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                            == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1))) 
                                        & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                           == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1)))
                                        ? 1U : (((((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) 
                                                   & (0U 
                                                      != (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd))) 
                                                  & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1))) 
                                                 & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1)))
                                                 ? 2U
                                                 : 0U));
    __Vtableidx1 = (0xffU & (vlSelf->PipelinedCore__DOT__PCtemp 
                             >> 2U));
    vlSelf->PipelinedCore__DOT__Instruction = PPC__ConstPool__TABLE_hc69761c0_0
        [__Vtableidx1];
    PipelinedCore__DOT__ALUA = ((2U & (IData)(PipelinedCore__DOT__ForwardALUA))
                                 ? ((1U & (IData)(PipelinedCore__DOT__ForwardALUA))
                                     ? 0U : vlSelf->PipelinedCore__DOT__WriteData)
                                 : ((1U & (IData)(PipelinedCore__DOT__ForwardALUA))
                                     ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                     : vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1));
    PipelinedCore__DOT__ALUB = ((2U & (IData)(PipelinedCore__DOT__ForwardALUB))
                                 ? ((1U & (IData)(PipelinedCore__DOT__ForwardALUB))
                                     ? vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate
                                     : vlSelf->PipelinedCore__DOT__WriteData)
                                 : ((1U & (IData)(PipelinedCore__DOT__ForwardALUA))
                                     ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                     : vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2));
    PipelinedCore__DOT__ImmGenPPC__DOT__Opcode = (0x1fU 
                                                  & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                     >> 2U));
    if ((8U == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode))) {
        vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Simm 
            = (((- (IData)((vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                            >> 0x1fU))) << 0xbU) | 
               ((0x7e0U & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                           >> 0x14U)) | (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                  >> 7U))));
        vlSelf->PipelinedCore__DOT__Immediate = vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Simm;
    } else if ((0x18U == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode))) {
        vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Bimm 
            = (((- (IData)((vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                            >> 0x1fU))) << 0xcU) | 
               ((0x800U & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                           << 4U)) | ((0x7e0U & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                  >> 7U)))));
        vlSelf->PipelinedCore__DOT__Immediate = vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Bimm;
    } else if (((5U == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode)) 
                | (0xdU == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode)))) {
        vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Uimm 
            = (0xfffff000U & vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction);
        vlSelf->PipelinedCore__DOT__Immediate = vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Uimm;
    } else if ((0x1bU == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode))) {
        vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Jimm 
            = (((- (IData)((vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                            >> 0x1fU))) << 0x14U) | 
               ((0xff000U & vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction) 
                | ((0x800U & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                              >> 9U)) | (0x7feU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                   >> 0x14U)))));
        vlSelf->PipelinedCore__DOT__Immediate = vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Jimm;
    } else if ((((((0U == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode)) 
                   | (3U == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode))) 
                  | (4U == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode))) 
                 | (0x19U == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode))) 
                | (0x1cU == (IData)(PipelinedCore__DOT__ImmGenPPC__DOT__Opcode)))) {
        vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Iimm 
            = (((- (IData)((vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                >> 0x14U));
        vlSelf->PipelinedCore__DOT__Immediate = vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Iimm;
    } else {
        vlSelf->PipelinedCore__DOT__Immediate = 0U;
    }
    vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1 
        = (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                    >> 0xfU));
    vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2 
        = (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                    >> 0x14U));
    vlSelf->PipelinedCore__DOT__ReadData1 = vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank
        [(0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                   >> 0xfU))];
    vlSelf->PipelinedCore__DOT__ReadData2 = vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank
        [(0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                   >> 0x14U))];
    PipelinedCore__DOT__ForwardBranchB = ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUSrc)
                                           ? 3U : (
                                                   ((((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite) 
                                                      & (0U 
                                                         != (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd))) 
                                                     & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                            >> 0x14U)))) 
                                                    & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                           >> 0x14U))))
                                                    ? 1U
                                                    : 
                                                   (((((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) 
                                                       & (0U 
                                                          != (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd))) 
                                                      & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                             >> 0x14U)))) 
                                                     & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                            >> 0x14U))))
                                                     ? 2U
                                                     : 0U)));
    __Vtableidx2 = ((0x400U & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction)));
    vlSelf->PipelinedCore__DOT__ALUSrcID = PPC__ConstPool__TABLE_h4987ea19_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemtoRegID = PPC__ConstPool__TABLE_hddf9a7d3_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__RegWriteIDtoStall = 
        PPC__ConstPool__TABLE_h7ae1d88f_0[__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemReadID = PPC__ConstPool__TABLE_hddf9a7d3_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemWriteIDtoStall = 
        PPC__ConstPool__TABLE_he1b5f03a_0[__Vtableidx2];
    vlSelf->PipelinedCore__DOT__BranchID = PPC__ConstPool__TABLE_h251d302e_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__ALUCtrlID = PPC__ConstPool__TABLE_hdd80e9ff_0
        [__Vtableidx2];
    PipelinedCore__DOT__ForwardBranchA = (((((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite) 
                                             & (0U 
                                                != (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd))) 
                                            & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                               == (0x1fU 
                                                   & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                      >> 0xfU)))) 
                                           & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                              == (0x1fU 
                                                  & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                     >> 0xfU))))
                                           ? 1U : (
                                                   ((((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) 
                                                      & (0U 
                                                         != (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd))) 
                                                     & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                            >> 0xfU)))) 
                                                    & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                           >> 0xfU))))
                                                    ? 2U
                                                    : 0U));
    vlSelf->PipelinedCore__DOT__ALUOutput = (((((((
                                                   ((0U 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl)) 
                                                    | (1U 
                                                       == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))) 
                                                   | (2U 
                                                      == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))) 
                                                  | (3U 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))) 
                                                 | (4U 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))) 
                                                | (5U 
                                                   == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))) 
                                               | (6U 
                                                  == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))) 
                                              | (7U 
                                                 == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl)))
                                              ? ((0U 
                                                  == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                  ? 
                                                 (PipelinedCore__DOT__ALUA 
                                                  + PipelinedCore__DOT__ALUB)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                   ? 
                                                  (PipelinedCore__DOT__ALUA 
                                                   - PipelinedCore__DOT__ALUB)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                    ? 
                                                   (PipelinedCore__DOT__ALUA 
                                                    << 
                                                    (0x1fU 
                                                     & PipelinedCore__DOT__ALUB))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                     ? 
                                                    (VL_LTS_III(1,32,32, PipelinedCore__DOT__ALUA, PipelinedCore__DOT__ALUB)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                      ? 
                                                     ((PipelinedCore__DOT__ALUA 
                                                       < PipelinedCore__DOT__ALUB)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                       ? 
                                                      (PipelinedCore__DOT__ALUA 
                                                       ^ PipelinedCore__DOT__ALUB)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                        ? 
                                                       (PipelinedCore__DOT__ALUA 
                                                        >> 
                                                        (0x1fU 
                                                         & PipelinedCore__DOT__ALUB))
                                                        : 
                                                       (PipelinedCore__DOT__ALUA 
                                                        >> 
                                                        (0x1fU 
                                                         & PipelinedCore__DOT__ALUB)))))))))
                                              : ((8U 
                                                  == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                  ? 
                                                 (PipelinedCore__DOT__ALUA 
                                                  | PipelinedCore__DOT__ALUB)
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl))
                                                   ? 
                                                  (PipelinedCore__DOT__ALUA 
                                                   & PipelinedCore__DOT__ALUB)
                                                   : 0U)));
    vlSelf->PipelinedCore__DOT__IFIDWrite = (1U & (~ 
                                                   (((((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead) 
                                                       & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                           == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                                          | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                             == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2)))) 
                                                      | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                                                          & (0x33U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction))) 
                                                         & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                             == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                                            | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                               == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2))))) 
                                                     | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                                                         & (IData)(vlSelf->PipelinedCore__DOT__MemReadID)) 
                                                        & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                            == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                                           | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                              == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2))))) 
                                                    | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                                                        & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead)) 
                                                       & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                           == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                                          | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                             == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2)))))));
    vlSelf->PipelinedCore__DOT__Stall = (((((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead) 
                                            & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                               | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                  == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2)))) 
                                           | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                                               & (0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction))) 
                                              & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                  == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                                 | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2))))) 
                                          | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                                              & (IData)(vlSelf->PipelinedCore__DOT__MemReadID)) 
                                             & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                 == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                                | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                   == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2))))) 
                                         | (((IData)(vlSelf->PipelinedCore__DOT__BranchID) 
                                             & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead)) 
                                            & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1)) 
                                               | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                  == (IData)(vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2)))));
    PipelinedCore__DOT__BranchA = ((2U & (IData)(PipelinedCore__DOT__ForwardBranchA))
                                    ? ((1U & (IData)(PipelinedCore__DOT__ForwardBranchA))
                                        ? 0U : vlSelf->PipelinedCore__DOT__WriteData)
                                    : ((1U & (IData)(PipelinedCore__DOT__ForwardBranchA))
                                        ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                        : vlSelf->PipelinedCore__DOT__ReadData1));
    PipelinedCore__DOT__BranchB = ((2U & (IData)(PipelinedCore__DOT__ForwardBranchB))
                                    ? ((1U & (IData)(PipelinedCore__DOT__ForwardBranchB))
                                        ? 0U : vlSelf->PipelinedCore__DOT__WriteData)
                                    : ((1U & (IData)(PipelinedCore__DOT__ForwardBranchA))
                                        ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                        : vlSelf->PipelinedCore__DOT__ReadData2));
    vlSelf->PipelinedCore__DOT__PCSrc = (((0x1aU == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID))
                                           ? (PipelinedCore__DOT__BranchA 
                                              == PipelinedCore__DOT__BranchB)
                                           : ((0x1bU 
                                               == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID))
                                               ? (PipelinedCore__DOT__BranchA 
                                                  != PipelinedCore__DOT__BranchB)
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID))
                                                   ? 
                                                  VL_LTS_III(1,32,32, PipelinedCore__DOT__BranchA, PipelinedCore__DOT__BranchB)
                                                   : 
                                                  ((0x1dU 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID))
                                                    ? 
                                                   VL_GTES_III(1,32,32, PipelinedCore__DOT__BranchA, PipelinedCore__DOT__BranchB)
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID))
                                                     ? 
                                                    (PipelinedCore__DOT__BranchA 
                                                     < PipelinedCore__DOT__BranchB)
                                                     : 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID)) 
                                                     & (PipelinedCore__DOT__BranchA 
                                                        >= PipelinedCore__DOT__BranchB))))))) 
                                         & (IData)(vlSelf->PipelinedCore__DOT__BranchID));
    vlSelf->PipelinedCore__DOT__PCNext = ((IData)(vlSelf->PipelinedCore__DOT__PCSrc)
                                           ? (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC 
                                              + vlSelf->PipelinedCore__DOT__Immediate)
                                           : ((IData)(4U) 
                                              + vlSelf->PipelinedCore__DOT__PCtemp));
}

VL_INLINE_OPT void PPC___024root___sequent__TOP__2(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->PipelinedCore__DOT__DataOutput = ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead)
                                               ? vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram
                                              [(0xfU 
                                                & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                                   >> 2U))]
                                               : 0U);
}

VL_INLINE_OPT void PPC___024root___combo__TOP__5(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->PipelinedCore__DOT__IFIDRst = ((IData)(vlSelf->rst) 
                                           | (IData)(vlSelf->PipelinedCore__DOT__PCSrc));
}

void PPC___024root___eval(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->original_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__original_clk)))) {
        PPC___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->original_clk)) & (IData)(vlSelf->__Vclklast__TOP__original_clk))) {
        PPC___024root___sequent__TOP__2(vlSelf);
    }
    PPC___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__original_clk = vlSelf->original_clk;
}

#ifdef VL_DEBUG
void PPC___024root___eval_debug_assertions(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->original_clk & 0xfeU))) {
        Verilated::overWidthError("original_clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
