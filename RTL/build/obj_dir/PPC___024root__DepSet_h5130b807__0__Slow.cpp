// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See PPC.h for the primary calling header

#include "verilated.h"

#include "PPC__Syms.h"
#include "PPC___024root.h"

extern const VlWide<16>/*511:0*/ PPC__ConstPool__CONST_h9262e1ae_0;
extern const VlWide<16>/*511:0*/ PPC__ConstPool__CONST_hb5330d08_0;
extern const VlWide<16>/*511:0*/ PPC__ConstPool__CONST_hb14952e6_0;
extern const VlWide<16>/*511:0*/ PPC__ConstPool__CONST_he33e613b_0;

VL_ATTR_COLD void PPC___024root___initial__TOP__1(PPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    PPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    PPC___024root___initial__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h85848bb6__0;
    VlWide<5>/*159:0*/ __Vtemp_h85848bb6__1;
    // Body
    __Vtemp_h85848bb6__0[0U] = 0x2e766364U;
    __Vtemp_h85848bb6__0[1U] = 0x655f7462U;
    __Vtemp_h85848bb6__0[2U] = 0x64436f72U;
    __Vtemp_h85848bb6__0[3U] = 0x6c696e65U;
    __Vtemp_h85848bb6__0[4U] = 0x50697065U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_h85848bb6__0));
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//RegisterFile.v:21: $dumpvar ignored, as Verilated without --trace\n");
    VL_READMEM_N(true, 8, 33, 0, VL_CVT_PACK_STR_NW(16, PPC__ConstPool__CONST_h9262e1ae_0)
                 ,  &(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 33, 0, VL_CVT_PACK_STR_NW(16, PPC__ConstPool__CONST_hb5330d08_0)
                 ,  &(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 33, 0, VL_CVT_PACK_STR_NW(16, PPC__ConstPool__CONST_hb14952e6_0)
                 ,  &(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram2)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 33, 0, VL_CVT_PACK_STR_NW(16, PPC__ConstPool__CONST_he33e613b_0)
                 ,  &(vlSelf->PipelinedCore__DOT__DataMemoryPPC__DOT__ram3)
                 , 0, ~0ULL);
    __Vtemp_h85848bb6__1[0U] = 0x2e766364U;
    __Vtemp_h85848bb6__1[1U] = 0x655f7462U;
    __Vtemp_h85848bb6__1[2U] = 0x64436f72U;
    __Vtemp_h85848bb6__1[3U] = 0x6c696e65U;
    __Vtemp_h85848bb6__1[4U] = 0x50697065U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_h85848bb6__1));
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:33: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:34: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:35: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: ../src//DataMemory.v:36: $dumpvar ignored, as Verilated without --trace\n");
}
