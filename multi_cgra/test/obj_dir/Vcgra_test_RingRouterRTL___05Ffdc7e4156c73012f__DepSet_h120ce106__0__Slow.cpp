// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f.h"

VL_ATTR_COLD void Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___ctor_var_reset(Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pos = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__input_units___05Frecv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05Fsend___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__input_units___05Fsend___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__input_units___05Fsend___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__input_units___05F0__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__input_units___05F0__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__input_units___05F0__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__input_units___05F0__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__input_units___05F1__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__input_units___05F1__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__input_units___05F1__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__input_units___05F1__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__input_units___05F2__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__input_units___05F2__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__input_units___05F2__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__input_units___05F2__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__output_units___05Fsend___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__output_units___05F0__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__output_units___05F1__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__output_units___05F2__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__route_units___05Frecv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__route_units___05Frecv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__route_units___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            VL_RAND_RESET_W(229, vlSelf->__PVT__route_units___05Fsend___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__route_units___05Fsend___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__route_units___05Fsend___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F0__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__route_units___05F0__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F1__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__route_units___05F1__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F2__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__route_units___05F2__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F3__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__route_units___05F3__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F4__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__route_units___05F4__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F5__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F5__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellout__route_units___05F5__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            VL_RAND_RESET_W(229, vlSelf->__PVT__switch_units___05Frecv___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->__PVT__switch_units___05Frecv___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->__PVT__switch_units___05Frecv___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellinp__switch_units___05F0__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellinp__switch_units___05F1__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__Vcellinp__switch_units___05F2__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__output_units___05F0__DOT__credit___05Fcount[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__output_units___05F0__DOT__credit___05Fdecr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->output_units___05F0__DOT____Vcellout__credit___05F0__count = VL_RAND_RESET_I(2);
    vlSelf->output_units___05F0__DOT____Vcellout__credit___05F1__count = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__output_units___05F1__DOT__credit___05Fcount[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__output_units___05F1__DOT__credit___05Fdecr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->output_units___05F1__DOT____Vcellout__credit___05F0__count = VL_RAND_RESET_I(2);
    vlSelf->output_units___05F1__DOT____Vcellout__credit___05F1__count = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__output_units___05F2__DOT__credit___05Fcount[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__output_units___05F2__DOT__credit___05Fdecr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->output_units___05F2__DOT____Vcellout__credit___05F0__count = VL_RAND_RESET_I(2);
    vlSelf->output_units___05F2__DOT____Vcellout__credit___05F1__count = VL_RAND_RESET_I(2);
    vlSelf->route_units___05F0__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->route_units___05F0__DOT____Vlvbound_h49e42bdf__0);
    vlSelf->route_units___05F1__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->route_units___05F1__DOT____Vlvbound_h49e42bdf__0);
    vlSelf->route_units___05F2__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->route_units___05F2__DOT____Vlvbound_h49e42bdf__0);
    vlSelf->route_units___05F3__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->route_units___05F3__DOT____Vlvbound_h49e42bdf__0);
    vlSelf->route_units___05F4__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->route_units___05F4__DOT____Vlvbound_h49e42bdf__0);
    vlSelf->route_units___05F5__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(229, vlSelf->route_units___05F5__DOT____Vlvbound_h49e42bdf__0);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__switch_units___05F0__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(12);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(13);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(6);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hb2227637__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hb2227637__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__switch_units___05F1__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(12);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(13);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(6);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hb2227637__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hb2227637__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(229, vlSelf->__PVT__switch_units___05F2__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(12);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(13);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(6);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hb2227637__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hb2227637__1 = VL_RAND_RESET_I(1);
}
