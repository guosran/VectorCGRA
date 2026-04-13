// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab.h"

VL_ATTR_COLD void Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab___ctor_var_reset(Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__send___05Fmsg = VL_RAND_RESET_Q(57);
    vlSelf->__PVT__send___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__send___05Fval = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbiter___05Fgrants = VL_RAND_RESET_I(3);
    vlSelf->__PVT__encoder___05Fout = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__arbiter__DOT__grants_int = VL_RAND_RESET_I(6);
    vlSelf->__PVT__arbiter__DOT__kills = VL_RAND_RESET_I(7);
    vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(3);
    vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 = VL_RAND_RESET_I(1);
}
