// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CgraRTL___05F302b5d787f9ca139.h"
#include "Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb.h"

VL_ATTR_COLD void Vcgra_test_CgraRTL___05F302b5d787f9ca139___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__4(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__4\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fval
        [2U];
}
