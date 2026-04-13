// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_MeshRouterRTL___05F62fd41df36cadbbc.h"

VL_ATTR_COLD void Vcgra_test_MeshRouterRTL___05F62fd41df36cadbbc___ctor_var_reset(Vcgra_test_MeshRouterRTL___05F62fd41df36cadbbc* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_MeshRouterRTL___05F62fd41df36cadbbc___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->pos = VL_RAND_RESET_I(2);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            VL_RAND_RESET_W(201, vlSelf->__PVT__route_units___05Fsend___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__PVT__route_units___05Fsend___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__PVT__route_units___05Fsend___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F0__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellout__route_units___05F0__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F1__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellout__route_units___05F1__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F2__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellout__route_units___05F2__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F3__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellout__route_units___05F3__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F4__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellout__route_units___05F4__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            VL_RAND_RESET_W(201, vlSelf->__PVT__switch_units___05Frecv___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__PVT__switch_units___05Frecv___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__PVT__switch_units___05Frecv___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellinp__switch_units___05F0__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellinp__switch_units___05F1__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellinp__switch_units___05F2__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F3__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellinp__switch_units___05F3__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F4__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__Vcellinp__switch_units___05F4__recv___05Fmsg[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__route_units___05F0__DOT__out_dir = VL_RAND_RESET_I(3);
    vlSelf->route_units___05F0__DOT____Vlvbound_h6d1ad749__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__route_units___05F1__DOT__out_dir = VL_RAND_RESET_I(3);
    vlSelf->route_units___05F1__DOT____Vlvbound_h6d1ad749__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__route_units___05F2__DOT__out_dir = VL_RAND_RESET_I(3);
    vlSelf->route_units___05F2__DOT____Vlvbound_h6d1ad749__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__route_units___05F3__DOT__out_dir = VL_RAND_RESET_I(3);
    vlSelf->route_units___05F3__DOT____Vlvbound_h6d1ad749__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__route_units___05F4__DOT__out_dir = VL_RAND_RESET_I(3);
    vlSelf->route_units___05F4__DOT____Vlvbound_h6d1ad749__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(5);
    vlSelf->__PVT__switch_units___05F0__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__switch_units___05F0__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(10);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(11);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(5);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(5);
    vlSelf->__PVT__switch_units___05F1__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__switch_units___05F1__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(10);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(11);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(5);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(5);
    vlSelf->__PVT__switch_units___05F2__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__switch_units___05F2__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(10);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(11);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(5);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F3__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(5);
    vlSelf->__PVT__switch_units___05F3__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__switch_units___05F3__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F3__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(10);
    vlSelf->__PVT__switch_units___05F3__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(11);
    vlSelf->__PVT__switch_units___05F3__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(5);
    vlSelf->switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F4__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(5);
    vlSelf->__PVT__switch_units___05F4__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__switch_units___05F4__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__switch_units___05F4__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(10);
    vlSelf->__PVT__switch_units___05F4__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(11);
    vlSelf->__PVT__switch_units___05F4__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(5);
    vlSelf->switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1 = VL_RAND_RESET_I(1);
}
