// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_ChannelRTL___05Fd5433e044837250f.h"
#include "Vcgra_test__Syms.h"

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U];
}

extern const VlUnpacked<CData/*2:0*/, 128> Vcgra_test__ConstPool__TABLE_h0ff887fa_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcgra_test__ConstPool__TABLE_h3c631caf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcgra_test__ConstPool__TABLE_hfd7f8679_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcgra_test__ConstPool__TABLE_h7d6d9230_0;

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx1])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx1];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx1])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx1];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx1])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx1];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
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
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Fval
           [7U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx2])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx2];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx2])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx2];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx2])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx2];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx3])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx3];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx3])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx3];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx3])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx3];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_load_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_load_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx4 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx4])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx4];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx4])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx4];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx4])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx4];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_load_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_load_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__read_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_store_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_store_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx5])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx5];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx5])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx5];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx5])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx5];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_store_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_mem_store_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__write_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx6 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx6])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx6];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx6])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx6];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx6])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx6];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_tile_load_response_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__controller__DOT__send_to_tile_load_response_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U];
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx7])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx7];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx7])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx7];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx7])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx7];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
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
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Fval
           [7U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx8 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx8])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx8];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx8])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx8];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx8])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx8];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx9 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx9])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx9];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx9])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx9];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx9])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx9];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_load_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_load_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx10 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx10])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx10];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx10])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx10];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx10])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx10];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_load_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_load_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__read_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_store_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_store_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx11 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx11])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx11];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx11])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx11];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx11])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx11];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_store_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_mem_store_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__write_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx12 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx12])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx12];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx12])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx12];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx12])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx12];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_tile_load_response_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__controller__DOT__send_to_tile_load_response_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U];
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx13 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx13])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx13];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx13])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx13];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx13])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx13];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
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
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Fval
           [7U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx14 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx14])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx14];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx14])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx14];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx14])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx14];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx15 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx15])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx15];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx15])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx15];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx15])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx15];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_load_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_load_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx16 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx16])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx16];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx16])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx16];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx16])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx16];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_load_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_load_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__read_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_store_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_store_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx17 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx17])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx17];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx17])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx17];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx17])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx17];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_store_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_mem_store_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__write_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx18 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx18])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx18];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx18])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx18];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx18])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx18];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_tile_load_response_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__controller__DOT__send_to_tile_load_response_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U];
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx19 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx19])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx19];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx19])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx19];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx19])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx19];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
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
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Fval
           [7U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_response_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_load_response_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx20 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx20])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx20];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx20])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx20];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx20])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx20];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_store_request_pkt_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__recv_from_tile_store_request_pkt_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx21 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx21])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx21];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx21])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx21];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx21])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx21];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_load_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_load_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx22 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx22])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx22];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx22])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx22];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx22])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx22];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_load_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_load_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__read_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_store_request_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_store_request_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx23 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx23])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx23];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx23])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx23];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx23])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx23];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_store_request_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_mem_store_request_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__write_crossbar___05Frecv___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_tile_load_response_queue__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_tile_load_response_queue__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __Vtableidx24 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx24])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx24];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx24])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx24];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx24])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx24];
    }
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy
           [2U]);
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_tile_load_response_queue__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__controller__DOT__send_to_tile_load_response_queue__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg[6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F0__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F0__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx25 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx25])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx25];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx25])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx25];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx25])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx25];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F0__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F0__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [0U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [0U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [0U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [0U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [0U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [0U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F1__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F1__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx26 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx26])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx26];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx26])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx26];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx26])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx26];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F1__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F1__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [1U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [1U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [1U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [1U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [1U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [1U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F2__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F2__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx27 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx27])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx27];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx27])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx27];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx27])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx27];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F2__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F2__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [2U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [2U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [2U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [2U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [2U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [2U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F3__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F3__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx28 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx28])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx28];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx28])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx28];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx28])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx28];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F3__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F3__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [3U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [3U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [3U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [3U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [3U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [3U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [3U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [3U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [3U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F4__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F4__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx29 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx29])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx29];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx29])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx29];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx29])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx29];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F4__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F4__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [4U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [4U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [4U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [4U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [4U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [4U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [4U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [4U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [4U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F5__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F5__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx30 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx30])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx30];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx30])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx30];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx30])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx30];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F5__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F5__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [5U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [5U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [5U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [5U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [5U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [5U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [5U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [5U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [5U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F6__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F6__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx31 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx31])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx31];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx31])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx31];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx31])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx31];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F6__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F6__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [6U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [6U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [6U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [6U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [6U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [6U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [6U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [6U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [6U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F7__0(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F7__0\n"); );
    // Init
    VlWide<7>/*200:0*/ queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0;
    VL_ZERO_W(201, queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h84b363b1__0);
    CData/*6:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    VlWide<7>/*200:0*/ __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(201, __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx32 = (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx32])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx32];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx32])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx32];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx32])) {
        vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx32];
    }
    if (__VdlySet__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__head;
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

VL_INLINE_OPT void Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F7__1(Vcgra_test_ChannelRTL___05Fd5433e044837250f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_ChannelRTL___05Fd5433e044837250f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F7__1\n"); );
    // Body
    vlSelf->__PVT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Fsend___05Frdy
           [7U]);
    vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen 
        = (vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fval
           [7U] & (2U > (IData)(vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [7U][0U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [7U][1U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [7U][2U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [7U][3U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [7U][4U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [7U][5U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP.cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05Frecv___05Fmsg
        [7U][6U];
    vlSelf->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__queues___05F0__DOT__ctrl___05Fwen;
}
