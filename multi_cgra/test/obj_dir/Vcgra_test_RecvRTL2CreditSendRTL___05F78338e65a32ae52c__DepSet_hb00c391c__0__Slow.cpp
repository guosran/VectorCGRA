// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c.h"

VL_ATTR_COLD void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F16__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F16__0\n"); );
    // Body
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
}

VL_ATTR_COLD void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___ctor_var_reset(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->__PVT__recv___05Fmsg);
    vlSelf->__PVT__recv___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recv___05Fval = VL_RAND_RESET_I(1);
    vlSelf->__PVT__send___05Fen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->__PVT__send___05Fmsg);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__credit___05Fcount[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__credit___05Fdecr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vcellout__credit___05F0__count = VL_RAND_RESET_I(2);
    vlSelf->__Vcellout__credit___05F1__count = VL_RAND_RESET_I(2);
}
