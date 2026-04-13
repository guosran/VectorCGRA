// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978.h"

VL_ATTR_COLD void Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__send_adp___05F0__0(Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__send_adp___05F0__0\n"); );
    // Init
    VlWide<7>/*196:0*/ buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0;
    VL_ZERO_W(197, buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0);
    VlWide<7>/*196:0*/ buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0;
    VL_ZERO_W(197, buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0);
    // Body
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__head;
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[1U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[2U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[3U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[4U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[5U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[6U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[6U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[1U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[2U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[3U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[4U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[5U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[6U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h96f08a60__0[6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_ATTR_COLD void Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978___ctor_var_reset(Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recv___05Fen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(197, vlSelf->__PVT__recv___05Fmsg);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(197, vlSelf->__PVT__send___05Fmsg);
    vlSelf->__PVT__send___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__send___05Fval = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbiter___05Fgrants = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__buffers___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05Fsend___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__buffers___05Fsend___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__buffers___05Fsend___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vcellout__buffers___05F0__send___05Fval = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__buffers___05F1__send___05Fval = VL_RAND_RESET_I(1);
    vlSelf->__PVT__encoder___05Fout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arbiter__DOT__grants_int = VL_RAND_RESET_I(4);
    vlSelf->__PVT__arbiter__DOT__kills = VL_RAND_RESET_I(5);
    vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(2);
    vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
}
