// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b.h"

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_load_request_queue__0(Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_load_request_queue__0\n"); );
    // Init
    VlWide<8>/*232:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0;
    VL_ZERO_W(233, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[7U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][7U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][7U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h01d5d818__0[7U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b___ctor_var_reset(Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(233, vlSelf->recv___05Fmsg);
    vlSelf->recv___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->recv___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(233, vlSelf->send___05Fmsg);
    vlSelf->send___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->send___05Fval = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(233, vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(233, vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(233, vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
}
