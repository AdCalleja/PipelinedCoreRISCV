// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See SSC.h for the primary calling header

#include "verilated.h"

#include "SSC___024root.h"

extern const VlUnpacked<IData/*31:0*/, 256> SSC__ConstPool__TABLE_hc69761c0_0;
extern const VlUnpacked<CData/*0:0*/, 2048> SSC__ConstPool__TABLE_h4987ea19_0;
extern const VlUnpacked<CData/*0:0*/, 2048> SSC__ConstPool__TABLE_hddf9a7d3_0;
extern const VlUnpacked<CData/*0:0*/, 2048> SSC__ConstPool__TABLE_h7ae1d88f_0;
extern const VlUnpacked<CData/*0:0*/, 2048> SSC__ConstPool__TABLE_he1b5f03a_0;
extern const VlUnpacked<CData/*0:0*/, 2048> SSC__ConstPool__TABLE_h251d302e_0;
extern const VlUnpacked<CData/*4:0*/, 2048> SSC__ConstPool__TABLE_hdd80e9ff_0;

VL_ATTR_COLD void SSC___024root___settle__TOP__3(SSC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SSC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SSC___024root___settle__TOP__3\n"); );
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
    // Body
    vlSelf->PipelinedCore__DOT__WriteData = ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regMemtoReg)
                                              ? vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput
                                              : vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput);
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
    vlSelf->PipelinedCore__DOT__Instruction = SSC__ConstPool__TABLE_hc69761c0_0
        [__Vtableidx1];
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
    vlSelf->PipelinedCore__DOT__ALUSrcID = SSC__ConstPool__TABLE_h4987ea19_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemtoRegID = SSC__ConstPool__TABLE_hddf9a7d3_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__RegWriteIDtoStall = 
        SSC__ConstPool__TABLE_h7ae1d88f_0[__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemReadID = SSC__ConstPool__TABLE_hddf9a7d3_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemWriteIDtoStall = 
        SSC__ConstPool__TABLE_he1b5f03a_0[__Vtableidx2];
    vlSelf->PipelinedCore__DOT__BranchID = SSC__ConstPool__TABLE_h251d302e_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__ALUCtrlID = SSC__ConstPool__TABLE_hdd80e9ff_0
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
    vlSelf->PipelinedCore__DOT__IFIDRst = ((IData)(vlSelf->rst) 
                                           | (IData)(vlSelf->PipelinedCore__DOT__PCSrc));
    vlSelf->PipelinedCore__DOT__PCNext = ((IData)(vlSelf->PipelinedCore__DOT__PCSrc)
                                           ? (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC 
                                              + vlSelf->PipelinedCore__DOT__Immediate)
                                           : ((IData)(4U) 
                                              + vlSelf->PipelinedCore__DOT__PCtemp));
}

extern const VlWide<19>/*607:0*/ SSC__ConstPool__CONST_h04b75497_0;

VL_ATTR_COLD void SSC___024root___initial__TOP__4(SSC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SSC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SSC___024root___initial__TOP__4\n"); );
    // Body
    VL_READMEM_N(true, 32, 16, 0, VL_CVT_PACK_STR_NW(19, SSC__ConstPool__CONST_h04b75497_0)
                 ,  &(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void SSC___024root___eval_initial(SSC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SSC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SSC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__original_clk = vlSelf->original_clk;
    SSC___024root___initial__TOP__4(vlSelf);
}

VL_ATTR_COLD void SSC___024root___eval_settle(SSC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SSC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SSC___024root___eval_settle\n"); );
    // Body
    SSC___024root___settle__TOP__3(vlSelf);
}

VL_ATTR_COLD void SSC___024root___final(SSC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SSC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SSC___024root___final\n"); );
}

VL_ATTR_COLD void SSC___024root___ctor_var_reset(SSC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SSC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SSC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->original_clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->leds = VL_RAND_RESET_I(8);
    vlSelf->PipelinedCore__DOT__Instruction = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__PCNext = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__ReadData1 = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__ReadData2 = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__Immediate = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__ALUOutput = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__DataOutput = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__PCSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__IFIDWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__IFIDRst = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__Stall = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__RegWriteIDtoStall = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__MemWriteIDtoStall = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__MemtoRegID = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__BranchID = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__MemReadID = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__ALUSrcID = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__ALUCtrlID = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__PCtemp = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Simm = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Bimm = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Uimm = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Jimm = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__ImmGenPPC__DOT__Iimm = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs1 = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__HazardDetectionPPC__DOT__Rs2 = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1 = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2 = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemtoReg = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1 = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2 = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2 = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemtoReg = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput = VL_RAND_RESET_I(32);
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd = VL_RAND_RESET_I(5);
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regMemtoReg = VL_RAND_RESET_I(1);
}
