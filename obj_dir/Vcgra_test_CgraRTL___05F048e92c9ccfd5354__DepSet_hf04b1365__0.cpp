// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CgraRTL___05F048e92c9ccfd5354.h"
#include "Vcgra_test_ChannelRTL___05Fd5433e044837250f.h"
#include "Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d.h"

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__19(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__19\n"); );
    // Init
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc = 0;
    QData/*34:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc = 0;
    // Body
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                    << 0x2dU) 
                                                   | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                      [0U] 
                                                      << 0xaU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = (0x40000000000001ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [1U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = (0x80000000000002ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [2U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = (0xc0000000000003ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [3U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = (0x100000000000004ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [4U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = (0x140000000000005ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [5U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = (0x180000000000006ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [6U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                              [0U][5U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                           [0U][4U])) 
                                           >> 2U)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = (0x1c0000000000007ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
                                                         << 0xaU))));
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                 << 0x34U) 
                                                | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                   << 0x2dU));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = (0x40000000000001ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = (0x80000000000002ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = (0xc0000000000003ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = (0x100000000000004ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = (0x140000000000005ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = (0x180000000000006ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc 
        = ((0x1fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc))
            ? (3U & ((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc) 
                     >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = (0x1c0000000000000ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (QData)((IData)(
                                                                        ((0x300U 
                                                                          & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                             [0U][6U] 
                                                                             << 1U)) 
                                                                         | ((0xf8U 
                                                                             & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][6U] 
                                                                                << 7U) 
                                                                                | (0x78U 
                                                                                & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x19U)))) 
                                                                            | (7U 
                                                                               & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x14U)))))))));
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [7U];
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__38(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__38\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[2U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[3U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[4U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[5U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[6U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[7U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[0U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[1U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[2U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[3U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[4U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[5U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[6U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[7U] 
        = (0U < (IData)(vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__ctrl___05Fcount));
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[2U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[3U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[4U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[5U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[6U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[7U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[0U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[1U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[2U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[3U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[4U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[5U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[6U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[7U] 
        = (0U < (IData)(vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__ctrl___05Fcount));
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[3U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[4U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[5U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[6U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[7U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [7U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[3U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[4U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[5U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[6U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[7U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [7U];
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__17(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__17\n"); );
    // Init
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc = 0;
    QData/*34:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc = 0;
    // Body
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                    << 0x2dU) 
                                                   | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                      [0U] 
                                                      << 0xaU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = (0x40000000000001ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [1U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = (0x80000000000002ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [2U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = (0xc0000000000003ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [3U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = (0x100000000000004ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [4U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = (0x140000000000005ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [5U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = (0x180000000000006ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [6U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                              [0U][5U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                           [0U][4U])) 
                                           >> 2U)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = (0x1c0000000000007ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
                                                         << 0xaU))));
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = (0x100ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = (0x40000000000101ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = (0x80000000000102ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = (0xc0000000000103ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = (0x100000000000104ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = (0x140000000000105ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = (0x180000000000106ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc 
        = (((0x20U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)) 
            & (0x3fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc) 
                      - (IData)(0x20U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = (0x1c0000000000000ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (QData)((IData)(
                                                                        ((0x300U 
                                                                          & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                             [0U][6U] 
                                                                             << 1U)) 
                                                                         | ((0xf8U 
                                                                             & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][6U] 
                                                                                << 7U) 
                                                                                | (0x78U 
                                                                                & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x19U)))) 
                                                                            | (7U 
                                                                               & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x14U)))))))));
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [7U];
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__17(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__17\n"); );
    // Init
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc = 0;
    QData/*34:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc = 0;
    // Body
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                    << 0x2dU) 
                                                   | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                      [0U] 
                                                      << 0xaU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = (0x40000000000001ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [1U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = (0x80000000000002ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [2U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = (0xc0000000000003ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [3U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = (0x100000000000004ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [4U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = (0x140000000000005ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [5U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = (0x180000000000006ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [6U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                              [0U][5U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                           [0U][4U])) 
                                           >> 2U)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = (0x1c0000000000007ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
                                                         << 0xaU))));
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = (0x200ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = (0x40000000000201ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = (0x80000000000202ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = (0xc0000000000203ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = (0x100000000000204ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = (0x140000000000205ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = (0x180000000000206ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc 
        = (((0x40U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)) 
            & (0x5fU >= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc) 
                      - (IData)(0x40U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = (0x1c0000000000000ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (QData)((IData)(
                                                                        ((0x300U 
                                                                          & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                             [0U][6U] 
                                                                             << 1U)) 
                                                                         | ((0xf8U 
                                                                             & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][6U] 
                                                                                << 7U) 
                                                                                | (0x78U 
                                                                                & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x19U)))) 
                                                                            | (7U 
                                                                               & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x14U)))))))));
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [7U];
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__17(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__17\n"); );
    // Init
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local = 0;
    CData/*6:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc = 0;
    QData/*34:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc = 0;
    CData/*1:0*/ __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc = 0;
    // Body
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[0U] = (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                    << 0x2dU) 
                                                   | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                      [0U] 
                                                      << 0xaU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[1U] = (0x40000000000001ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [1U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[2U] = (0x80000000000002ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [2U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[3U] = (0xc0000000000003ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [3U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[4U] = (0x100000000000004ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [4U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[5U] = (0x140000000000005ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [5U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[6U] = (0x180000000000006ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_local)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr)) 
                                                       << 0x2dU) 
                                                      | (vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg
                                                         [6U] 
                                                         << 0xaU))));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                              [0U][5U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                           [0U][4U])) 
                                           >> 2U)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__wr_pkt[7U] = (0x1c0000000000007ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_store_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_waddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_wdata_from_noc 
                                                         << 0xaU))));
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = 0x40000000000001ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = 0x80000000000002ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = 0xc0000000000003ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = 0x100000000000004ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = 0x140000000000005ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = 0x180000000000006ULL;
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = 0x1c0000000000007ULL;
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [0U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[0U] = (0x300ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [1U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[1U] = (0x40000000000301ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [2U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[2U] = (0x80000000000302ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [3U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[3U] = (0xc0000000000303ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [4U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[4U] = (0x100000000000304ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [5U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[5U] = (0x140000000000305ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg
        [6U];
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[6U] = (0x180000000000306ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                                    << 0x34U) 
                                                   | ((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                      << 0x2dU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc 
        = (0x7fU & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                     [0U][4U] << 5U) | (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                        [0U][3U] >> 0x1bU)));
    __PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc 
        = ((0x60U <= (IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc))
            ? (3U & (((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc) 
                      - (IData)(0x60U)) >> 4U)) : 2U);
    vlSelf->__PVT__data_mem__DOT__rd_pkt[7U] = (0x1c0000000000000ULL 
                                                | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(__PVT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)) 
                                                       << 0x2dU) 
                                                      | (QData)((IData)(
                                                                        ((0x300U 
                                                                          & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                             [0U][6U] 
                                                                             << 1U)) 
                                                                         | ((0xf8U 
                                                                             & ((vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][6U] 
                                                                                << 7U) 
                                                                                | (0x78U 
                                                                                & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x19U)))) 
                                                                            | (7U 
                                                                               & (vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
                                                                                [0U][5U] 
                                                                                >> 0x14U)))))))));
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__wr_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__rd_pkt[7U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg
        [7U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[3U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[4U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[5U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[6U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fmsg[7U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [7U];
}
