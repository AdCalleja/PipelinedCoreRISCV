// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See PPC.h for the primary calling header

#include "verilated.h"

#include "PPC___024root.h"

extern const VlUnpacked<IData/*31:0*/, 256> PPC__ConstPool__TABLE_hf2d654bb_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_hfbf9e803_0;
extern const VlUnpacked<CData/*1:0*/, 2048> PPC__ConstPool__TABLE_ha1704891_0;
extern const VlUnpacked<CData/*2:0*/, 2048> PPC__ConstPool__TABLE_ha99b22a6_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_he1b5f03a_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_hddf9a7d3_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_h2f62ad89_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_h5e8fd388_0;
extern const VlUnpacked<CData/*1:0*/, 2048> PPC__ConstPool__TABLE_h19d5dad5_0;
extern const VlUnpacked<CData/*0:0*/, 2048> PPC__ConstPool__TABLE_h251d302e_0;
extern const VlUnpacked<CData/*4:0*/, 2048> PPC__ConstPool__TABLE_h59e31b33_0;

VL_INLINE_OPT void PPC___024root___sequent__TOP__2(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ PipelinedCore__DOT__ALUA;
    IData/*31:0*/ PipelinedCore__DOT__ALUB;
    CData/*1:0*/ PipelinedCore__DOT__ForwardALUA;
    CData/*1:0*/ PipelinedCore__DOT__ForwardALUB;
    CData/*4:0*/ PipelinedCore__DOT__ImmGenPPC__DOT__Opcode;
    IData/*31:0*/ PipelinedCore__DOT__StoreLogicPPC__DOT__Byte0;
    IData/*31:0*/ PipelinedCore__DOT__StoreLogicPPC__DOT__Byte1;
    IData/*31:0*/ PipelinedCore__DOT__StoreLogicPPC__DOT__Byte2;
    IData/*31:0*/ PipelinedCore__DOT__StoreLogicPPC__DOT__Byte3;
    IData/*31:0*/ PipelinedCore__DOT__StoreLogicPPC__DOT__Half0;
    IData/*31:0*/ PipelinedCore__DOT__StoreLogicPPC__DOT__Half1;
    IData/*31:0*/ PipelinedCore__DOT__StoreLogicPPC__DOT__Word;
    CData/*7:0*/ __Vtableidx1;
    SData/*10:0*/ __Vtableidx2;
    // Body
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate = 0U;
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1 = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2 = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl = 0U;
    } else {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate 
            = vlSelf->PipelinedCore__DOT__Immediate;
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw 
            = vlSelf->PipelinedCore__DOT__ReadData2Forw;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1 
            = vlSelf->PipelinedCore__DOT__ReadData1;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2 
            = vlSelf->PipelinedCore__DOT__ReadData2;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUCtrl 
            = vlSelf->PipelinedCore__DOT__ALUCtrlID;
    }
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUSrc 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__ALUSrcID));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regLuiAuipcSel 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->PipelinedCore__DOT__LuiAuipcSelID));
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemWrite 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemWrite));
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel = 0U;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput = 0U;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regWriteDataSrc = 0U;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput = 0U;
    } else {
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel 
            = vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regStoreLoadSel;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput 
            = vlSelf->PipelinedCore__DOT__DataOutput;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regWriteDataSrc 
            = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regWriteDataSrc;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput 
            = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput;
    }
    vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite));
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1 = 0U;
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2 = 0U;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd = 0U;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regPC = 0U;
    } else {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs1 
            = (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                        >> 0xfU));
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2 
            = (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                        >> 0x14U));
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd 
            = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd;
        vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regPC 
            = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regPC;
    }
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemWrite 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->PipelinedCore__DOT__Stall)
                                              ? 0U : (IData)(vlSelf->PipelinedCore__DOT__MemWriteIDtoStall))));
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regStoreLoadSel = 0U;
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regWriteDataSrc = 0U;
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput = 0U;
    } else {
        vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regStoreLoadSel 
            = vlSelf->PipelinedCore__DOT__StoreLoadSelID;
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regWriteDataSrc 
            = vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regWriteDataSrc;
        vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
            = vlSelf->PipelinedCore__DOT__ALUOutput;
    }
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite));
    vlSelf->PipelinedCore__DOT__WriteData = ((2U & (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regWriteDataSrc))
                                              ? ((1U 
                                                  & (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regWriteDataSrc))
                                                  ? 0U
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regPC))
                                              : ((1U 
                                                  & (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regWriteDataSrc))
                                                  ? vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regDataOutput
                                                  : vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regALUOutput));
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regPC 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regPC);
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
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regWriteDataSrc 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->PipelinedCore__DOT__WriteDataSrcID));
    vlSelf->PipelinedCore__DOT__MemoryByteSel = ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                                                      ? 8U
                                                      : 0U))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                                                     ? 0xcU
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))
                                                    ? 0xfU
                                                    : 0U)));
    PipelinedCore__DOT__StoreLogicPPC__DOT__Byte0 = 
        (0xffU & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw);
    PipelinedCore__DOT__StoreLogicPPC__DOT__Byte1 = 
        (0xff00U & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw 
                    << 8U));
    PipelinedCore__DOT__StoreLogicPPC__DOT__Byte2 = 
        (0xff0000U & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw 
                      << 0x10U));
    PipelinedCore__DOT__StoreLogicPPC__DOT__Byte3 = 
        (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw 
         << 0x18U);
    PipelinedCore__DOT__StoreLogicPPC__DOT__Half0 = 
        (0xffffU & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw);
    PipelinedCore__DOT__StoreLogicPPC__DOT__Half1 = 
        (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw 
         << 0x10U);
    PipelinedCore__DOT__StoreLogicPPC__DOT__Word = vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regReadData2Forw;
    if ((0U == (3U & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))) {
        vlSelf->PipelinedCore__DOT__StoreLogicPPC__DOT__Byte 
            = ((0U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                ? PipelinedCore__DOT__StoreLogicPPC__DOT__Byte0
                : ((1U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                    ? PipelinedCore__DOT__StoreLogicPPC__DOT__Byte1
                    : ((2U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                        ? PipelinedCore__DOT__StoreLogicPPC__DOT__Byte2
                        : ((3U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                            ? PipelinedCore__DOT__StoreLogicPPC__DOT__Byte3
                            : 0U))));
        vlSelf->PipelinedCore__DOT__StoreFixed = vlSelf->PipelinedCore__DOT__StoreLogicPPC__DOT__Byte;
    } else if ((1U == (3U & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))) {
        vlSelf->PipelinedCore__DOT__StoreLogicPPC__DOT__Half 
            = ((0U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                ? PipelinedCore__DOT__StoreLogicPPC__DOT__Half0
                : ((2U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                    ? PipelinedCore__DOT__StoreLogicPPC__DOT__Half1
                    : 0U));
        vlSelf->PipelinedCore__DOT__StoreFixed = vlSelf->PipelinedCore__DOT__StoreLogicPPC__DOT__Half;
    } else {
        vlSelf->PipelinedCore__DOT__StoreFixed = ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))
                                                   ? PipelinedCore__DOT__StoreLogicPPC__DOT__Word
                                                   : 0U);
    }
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regPC 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC);
    if (vlSelf->PipelinedCore__DOT__IFIDRst) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC = 0U;
    } else if (vlSelf->PipelinedCore__DOT__IFIDWrite) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC 
            = vlSelf->PipelinedCore__DOT__PCtemp;
    }
    if (vlSelf->rst) {
        vlSelf->PipelinedCore__DOT__PCtemp = 0U;
    } else if ((1U & (~ ((((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead) 
                           & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                               == (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                            >> 0xfU))) 
                              | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                 == (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                              >> 0x14U))))) 
                          | (((IData)(vlSelf->PipelinedCore__DOT__DoBranch) 
                              & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite)) 
                             & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                 == (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                              >> 0xfU))) 
                                | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                   == (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                >> 0x14U)))))) 
                         | (((IData)(vlSelf->PipelinedCore__DOT__DoBranch) 
                             & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead)) 
                            & (((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                == (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                             >> 0xfU))) 
                               | ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                  == (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                               >> 0x14U))))))))) {
        vlSelf->PipelinedCore__DOT__PCtemp = vlSelf->PipelinedCore__DOT__PCNext;
    }
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->PipelinedCore__DOT__Stall)
                                              ? 0U : (IData)(vlSelf->PipelinedCore__DOT__RegWriteIDtoStall))));
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead));
    vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->PipelinedCore__DOT__MemReadID));
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
    PipelinedCore__DOT__ForwardALUB = (((((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite) 
                                          & (0U != (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd))) 
                                         & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                            == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2))) 
                                        & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                           == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2)))
                                        ? 1U : (((((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) 
                                                   & (0U 
                                                      != (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd))) 
                                                  & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2))) 
                                                 & ((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd) 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRs2)))
                                                 ? 2U
                                                 : 0U));
    vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                 >> 7U)));
    PipelinedCore__DOT__ALUA = ((2U & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regLuiAuipcSel))
                                 ? ((1U & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regLuiAuipcSel))
                                     ? 0U : vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regPC)
                                 : ((1U & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regLuiAuipcSel))
                                     ? 0U : ((2U & (IData)(PipelinedCore__DOT__ForwardALUA))
                                              ? ((1U 
                                                  & (IData)(PipelinedCore__DOT__ForwardALUA))
                                                  ? 0U
                                                  : vlSelf->PipelinedCore__DOT__WriteData)
                                              : ((1U 
                                                  & (IData)(PipelinedCore__DOT__ForwardALUA))
                                                  ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                                  : vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData1))));
    vlSelf->PipelinedCore__DOT__ReadData2Forw = ((2U 
                                                  & (IData)(PipelinedCore__DOT__ForwardALUB))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(PipelinedCore__DOT__ForwardALUB))
                                                   ? 0U
                                                   : vlSelf->PipelinedCore__DOT__WriteData)
                                                  : 
                                                 ((1U 
                                                   & (IData)(PipelinedCore__DOT__ForwardALUB))
                                                   ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                                   : vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regReadData2));
    PipelinedCore__DOT__ALUB = ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regALUSrc)
                                 ? vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regImmediate
                                 : vlSelf->PipelinedCore__DOT__ReadData2Forw);
    if (vlSelf->PipelinedCore__DOT__IFIDRst) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction = 0U;
    } else if (vlSelf->PipelinedCore__DOT__IFIDWrite) {
        vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
            = vlSelf->PipelinedCore__DOT__Instruction;
    }
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
                                                       VL_SHIFTRS_III(32,32,5, PipelinedCore__DOT__ALUA, 
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
    __Vtableidx1 = (0xffU & (vlSelf->PipelinedCore__DOT__PCtemp 
                             >> 2U));
    vlSelf->PipelinedCore__DOT__Instruction = PPC__ConstPool__TABLE_hf2d654bb_0
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
    vlSelf->PipelinedCore__DOT__ForwardBranchA = ((
                                                   (((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite) 
                                                     & (0U 
                                                        != (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd))) 
                                                    & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                           >> 0xfU)))) 
                                                   & ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                          >> 0xfU))))
                                                   ? 1U
                                                   : 
                                                  (((((IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) 
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
    vlSelf->PipelinedCore__DOT__ForwardBranchB = ((
                                                   (((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRegWrite) 
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
                                                    : 0U));
    __Vtableidx2 = ((0x400U & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction)));
    vlSelf->PipelinedCore__DOT__RegWriteIDtoStall = 
        PPC__ConstPool__TABLE_hfbf9e803_0[__Vtableidx2];
    vlSelf->PipelinedCore__DOT__WriteDataSrcID = PPC__ConstPool__TABLE_ha1704891_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__StoreLoadSelID = PPC__ConstPool__TABLE_ha99b22a6_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemWriteIDtoStall = 
        PPC__ConstPool__TABLE_he1b5f03a_0[__Vtableidx2];
    vlSelf->PipelinedCore__DOT__MemReadID = PPC__ConstPool__TABLE_hddf9a7d3_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__ALUSrcID = PPC__ConstPool__TABLE_h2f62ad89_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__PCJumpSrc = PPC__ConstPool__TABLE_h5e8fd388_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__LuiAuipcSelID = PPC__ConstPool__TABLE_h19d5dad5_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__DoBranch = PPC__ConstPool__TABLE_h251d302e_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__ALUCtrlID = PPC__ConstPool__TABLE_h59e31b33_0
        [__Vtableidx2];
    vlSelf->PipelinedCore__DOT__IFIDWrite = (1U & (~ 
                                                   ((((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead) 
                                                      & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                              >> 0xfU))) 
                                                         | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                                >> 0x14U))))) 
                                                     | (((IData)(vlSelf->PipelinedCore__DOT__DoBranch) 
                                                         & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite)) 
                                                        & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                                >> 0xfU))) 
                                                           | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                                  >> 0x14U)))))) 
                                                    | (((IData)(vlSelf->PipelinedCore__DOT__DoBranch) 
                                                        & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead)) 
                                                       & (((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                               >> 0xfU))) 
                                                          | ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                                 >> 0x14U))))))));
    vlSelf->PipelinedCore__DOT__Stall = ((((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regMemRead) 
                                           & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                               == (0x1fU 
                                                   & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                      >> 0xfU))) 
                                              | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                     >> 0x14U))))) 
                                          | (((IData)(vlSelf->PipelinedCore__DOT__DoBranch) 
                                              & (IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRegWrite)) 
                                             & (((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                     >> 0xfU))) 
                                                | ((IData)(vlSelf->PipelinedCore__DOT__IDEXRegsPPC__DOT__regRd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                       >> 0x14U)))))) 
                                         | (((IData)(vlSelf->PipelinedCore__DOT__DoBranch) 
                                             & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead)) 
                                            & (((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                    >> 0xfU))) 
                                               | ((IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regRd) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                                                      >> 0x14U))))));
}

VL_INLINE_OPT void PPC___024root___sequent__TOP__3(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v0;
    CData/*4:0*/ __Vdlyvdim0__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32;
    IData/*31:0*/ __Vdlyvval__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32;
    CData/*5:0*/ __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0;
    CData/*7:0*/ __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0;
    CData/*5:0*/ __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0;
    CData/*7:0*/ __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0;
    CData/*5:0*/ __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0;
    CData/*7:0*/ __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0;
    CData/*5:0*/ __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0;
    CData/*7:0*/ __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0;
    CData/*0:0*/ __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0;
    // Body
    __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0 = 0U;
    __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0 = 0U;
    __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0 = 0U;
    __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0 = 0U;
    __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v0 = 0U;
    __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 = 0U;
    if (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemWrite) {
        if ((8U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))) {
            vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_h8eae6cfb__0 
                = (vlSelf->PipelinedCore__DOT__StoreFixed 
                   >> 0x18U);
            if ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                    >> 2U)))) {
                __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0 
                    = vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_h8eae6cfb__0;
                __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0 = 1U;
                __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0 
                    = (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                >> 2U));
            }
        }
        if ((1U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))) {
            vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_hafae85ae__0 
                = (0xffU & vlSelf->PipelinedCore__DOT__StoreFixed);
            if ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                    >> 2U)))) {
                __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0 
                    = vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_hafae85ae__0;
                __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0 = 1U;
                __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0 
                    = (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                >> 2U));
            }
        }
        if ((2U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))) {
            vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_hc7e062c0__0 
                = (0xffU & (vlSelf->PipelinedCore__DOT__StoreFixed 
                            >> 8U));
            if ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                    >> 2U)))) {
                __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0 
                    = vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_hc7e062c0__0;
                __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0 = 1U;
                __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0 
                    = (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                >> 2U));
            }
        }
        if ((4U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))) {
            vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_h07f684dc__0 
                = (0xffU & (vlSelf->PipelinedCore__DOT__StoreFixed 
                            >> 0x10U));
            if ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                    >> 2U)))) {
                __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0 
                    = vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT____Vlvbound_h07f684dc__0;
                __Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0 = 1U;
                __Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0 
                    = (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                >> 2U));
            }
        }
    }
    if (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regMemRead) {
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte3 
            = ((8U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))
                ? ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                       >> 2U))) ? vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram3
                   [(0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                              >> 2U))] : 0U) : 0U);
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte2 
            = ((4U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))
                ? ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                       >> 2U))) ? vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram2
                   [(0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                              >> 2U))] : 0U) : 0U);
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte1 
            = ((2U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))
                ? ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                       >> 2U))) ? vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram1
                   [(0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                              >> 2U))] : 0U) : 0U);
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte0 
            = ((1U & (IData)(vlSelf->PipelinedCore__DOT__MemoryByteSel))
                ? ((0x20U >= (0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                                       >> 2U))) ? vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram0
                   [(0x3fU & (vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput 
                              >> 2U))] : 0U) : 0U);
    }
    if (vlSelf->rst) {
        __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v0 = 1U;
    } else if (vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRegWrite) {
        if ((0U != (IData)(vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd))) {
            __Vdlyvval__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 
                = vlSelf->PipelinedCore__DOT__WriteData;
            __Vdlyvset__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 = 1U;
            __Vdlyvdim0__PipelinedCore__DOT__RegisterFilePPC__DOT__bank__v32 
                = vlSelf->PipelinedCore__DOT__MEMWBRegsPPC__DOT__regRd;
        }
    }
    if (__Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0) {
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram3[__Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0] 
            = __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram3__v0;
    }
    if (__Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0) {
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram2[__Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0] 
            = __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram2__v0;
    }
    if (__Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0) {
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram1[__Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0] 
            = __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram1__v0;
    }
    if (__Vdlyvset__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0) {
        vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram0[__Vdlyvdim0__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0] 
            = __Vdlyvval__PipelinedCore__DOT__DataMemoryPPC__DOT__ram0__v0;
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
    vlSelf->PipelinedCore__DOT__LoadToFix = (((IData)(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte3) 
                                              << 0x18U) 
                                             | (((IData)(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte2) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte1) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__Byte0))));
}

VL_INLINE_OPT void PPC___024root___multiclk__TOP__5(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___multiclk__TOP__5\n"); );
    // Init
    IData/*31:0*/ PipelinedCore__DOT__BranchA;
    IData/*31:0*/ PipelinedCore__DOT__BranchB;
    CData/*7:0*/ PipelinedCore__DOT__LoadLogicPPC__DOT__Byte0;
    CData/*7:0*/ PipelinedCore__DOT__LoadLogicPPC__DOT__Byte1;
    CData/*7:0*/ PipelinedCore__DOT__LoadLogicPPC__DOT__Byte2;
    CData/*7:0*/ PipelinedCore__DOT__LoadLogicPPC__DOT__Byte3;
    SData/*15:0*/ PipelinedCore__DOT__LoadLogicPPC__DOT__Half0;
    SData/*15:0*/ PipelinedCore__DOT__LoadLogicPPC__DOT__Half1;
    IData/*31:0*/ PipelinedCore__DOT__LoadLogicPPC__DOT__Word;
    // Body
    vlSelf->PipelinedCore__DOT__ReadData2 = vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank
        [(0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                   >> 0x14U))];
    vlSelf->PipelinedCore__DOT__ReadData1 = vlSelf->PipelinedCore__DOT__RegisterFilePPC__DOT__bank
        [(0x1fU & (vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regInstruction 
                   >> 0xfU))];
    PipelinedCore__DOT__LoadLogicPPC__DOT__Byte0 = 
        (0xffU & vlSelf->PipelinedCore__DOT__LoadToFix);
    PipelinedCore__DOT__LoadLogicPPC__DOT__Byte1 = 
        (0xffU & (vlSelf->PipelinedCore__DOT__LoadToFix 
                  >> 8U));
    PipelinedCore__DOT__LoadLogicPPC__DOT__Byte2 = 
        (0xffU & (vlSelf->PipelinedCore__DOT__LoadToFix 
                  >> 0x10U));
    PipelinedCore__DOT__LoadLogicPPC__DOT__Byte3 = 
        (vlSelf->PipelinedCore__DOT__LoadToFix >> 0x18U);
    PipelinedCore__DOT__LoadLogicPPC__DOT__Half0 = 
        (0xffffU & vlSelf->PipelinedCore__DOT__LoadToFix);
    PipelinedCore__DOT__LoadLogicPPC__DOT__Half1 = 
        (vlSelf->PipelinedCore__DOT__LoadToFix >> 0x10U);
    PipelinedCore__DOT__LoadLogicPPC__DOT__Word = vlSelf->PipelinedCore__DOT__LoadToFix;
    if ((0U == (3U & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))) {
        vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Byte 
            = ((0U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                ? (IData)(PipelinedCore__DOT__LoadLogicPPC__DOT__Byte0)
                : ((1U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                    ? (IData)(PipelinedCore__DOT__LoadLogicPPC__DOT__Byte1)
                    : ((2U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                        ? (IData)(PipelinedCore__DOT__LoadLogicPPC__DOT__Byte2)
                        : ((3U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                            ? (IData)(PipelinedCore__DOT__LoadLogicPPC__DOT__Byte3)
                            : 0U))));
        vlSelf->PipelinedCore__DOT__DataOutput = ((4U 
                                                   & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel))
                                                   ? (IData)(vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Byte)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Byte) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Byte)));
    } else if ((1U == (3U & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))) {
        vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Half 
            = ((0U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                ? (IData)(PipelinedCore__DOT__LoadLogicPPC__DOT__Half0)
                : ((2U == (3U & vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput))
                    ? (IData)(PipelinedCore__DOT__LoadLogicPPC__DOT__Half1)
                    : 0U));
        vlSelf->PipelinedCore__DOT__DataOutput = ((4U 
                                                   & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel))
                                                   ? (IData)(vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Half)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Half) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->PipelinedCore__DOT__LoadLogicPPC__DOT__Half)));
    } else {
        vlSelf->PipelinedCore__DOT__DataOutput = ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regStoreLoadSel)))
                                                   ? PipelinedCore__DOT__LoadLogicPPC__DOT__Word
                                                   : 0U);
    }
    PipelinedCore__DOT__BranchB = ((2U & (IData)(vlSelf->PipelinedCore__DOT__ForwardBranchB))
                                    ? ((1U & (IData)(vlSelf->PipelinedCore__DOT__ForwardBranchB))
                                        ? 0U : vlSelf->PipelinedCore__DOT__WriteData)
                                    : ((1U & (IData)(vlSelf->PipelinedCore__DOT__ForwardBranchB))
                                        ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                        : vlSelf->PipelinedCore__DOT__ReadData2));
    PipelinedCore__DOT__BranchA = ((2U & (IData)(vlSelf->PipelinedCore__DOT__ForwardBranchA))
                                    ? ((1U & (IData)(vlSelf->PipelinedCore__DOT__ForwardBranchA))
                                        ? 0U : vlSelf->PipelinedCore__DOT__WriteData)
                                    : ((1U & (IData)(vlSelf->PipelinedCore__DOT__ForwardBranchA))
                                        ? vlSelf->PipelinedCore__DOT__EXMEMRegsPPC__DOT__regALUOutput
                                        : vlSelf->PipelinedCore__DOT__ReadData1));
    vlSelf->PipelinedCore__DOT__PCSrc = (1U & (((IData)(vlSelf->PipelinedCore__DOT__WriteDataSrcID) 
                                                >> 1U) 
                                               | (((0x1aU 
                                                    == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID))
                                                    ? 
                                                   (PipelinedCore__DOT__BranchA 
                                                    == PipelinedCore__DOT__BranchB)
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->PipelinedCore__DOT__ALUCtrlID))
                                                     ? 
                                                    (PipelinedCore__DOT__BranchA 
                                                     != PipelinedCore__DOT__BranchB)
                                                     : 
                                                    ((0x1cU 
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
                                                  & (IData)(vlSelf->PipelinedCore__DOT__DoBranch))));
    vlSelf->PipelinedCore__DOT__PCNext = ((IData)(vlSelf->PipelinedCore__DOT__PCSrc)
                                           ? (0xfffffffeU 
                                              & (((IData)(vlSelf->PipelinedCore__DOT__PCJumpSrc)
                                                   ? vlSelf->PipelinedCore__DOT__ReadData1
                                                   : vlSelf->PipelinedCore__DOT__IFIDRegsPPC__DOT__regPC) 
                                                 + vlSelf->PipelinedCore__DOT__Immediate))
                                           : ((IData)(4U) 
                                              + vlSelf->PipelinedCore__DOT__PCtemp));
}

VL_INLINE_OPT void PPC___024root___combo__TOP__6(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->PipelinedCore__DOT__IFIDRst = (1U & ((IData)(vlSelf->rst) 
                                                 | ((IData)(vlSelf->PipelinedCore__DOT__Stall)
                                                     ? 0U
                                                     : (IData)(vlSelf->PipelinedCore__DOT__PCSrc))));
}

void PPC___024root___eval(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->original_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__original_clk)))) {
        PPC___024root___sequent__TOP__2(vlSelf);
    }
    if (((~ (IData)(vlSelf->original_clk)) & (IData)(vlSelf->__Vclklast__TOP__original_clk))) {
        PPC___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->original_clk) ^ (IData)(vlSelf->__Vclklast__TOP__original_clk))) {
        PPC___024root___multiclk__TOP__5(vlSelf);
    }
    PPC___024root___combo__TOP__6(vlSelf);
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
