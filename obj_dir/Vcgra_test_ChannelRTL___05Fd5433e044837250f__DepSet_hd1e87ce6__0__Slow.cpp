// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_ChannelRTL___05Fd5433e044837250f.h"
#include "Vcgra_test__Syms.h"

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [0U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [1U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [0U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [1U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [0U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [1U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [0U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [1U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}

VL_ATTR_COLD void Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U] 
        = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0[6U];
}
