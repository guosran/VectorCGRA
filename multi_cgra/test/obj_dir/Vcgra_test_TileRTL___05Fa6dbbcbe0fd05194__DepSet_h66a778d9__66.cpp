// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194.h"
#include "Vcgra_test__Syms.h"

VL_INLINE_OPT void Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15__1(Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15__1\n"); );
    // Init
    CData/*0:0*/ __PVT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy;
    __PVT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy = 0;
    // Body
    __PVT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy = 0U;
    if (vlSelf->__PVT__ctrl_mem__DOT__start_iterate_ctrl) {
        if (((0U < (IData)(vlSelf->__PVT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
             & (~ (IData)(vlSelf->__PVT__ctrl_mem__DOT__sent_complete)))) {
            __PVT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy 
                = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F15.__PVT__recv___05Frdy;
        }
    }
    vlSelf->__PVT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
           & (IData)(__PVT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy));
}

extern const VlWide<8>/*255:0*/ Vcgra_test__ConstPool__CONST_h922a2334_0;

VL_INLINE_OPT void Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15__2(Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15__2\n"); );
    // Init
    VlWide<3>/*66:0*/ __PVT__const_mem___05Frecv_const___05Fmsg;
    VL_ZERO_W(67, __PVT__const_mem___05Frecv_const___05Fmsg);
    CData/*0:0*/ __PVT__const_mem___05Frecv_const___05Frdy;
    __PVT__const_mem___05Frecv_const___05Frdy = 0;
    VlWide<8>/*228:0*/ __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg;
    VL_ZERO_W(229, __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg);
    CData/*0:0*/ __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fval;
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 0;
    CData/*0:0*/ __PVT__const_mem__DOT_____05Ftmpvar___05Fload_const_not_full;
    __PVT__const_mem__DOT_____05Ftmpvar___05Fload_const_not_full = 0;
    // Body
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[0U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[1U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[2U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[3U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[4U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[5U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[6U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[6U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[7U] 
        = Vcgra_test__ConstPool__CONST_h922a2334_0[7U];
    __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 0U;
    __PVT__const_mem___05Frecv_const___05Fmsg[0U] = 0U;
    __PVT__const_mem___05Frecv_const___05Fmsg[1U] = 0U;
    __PVT__const_mem___05Frecv_const___05Fmsg[2U] = 0U;
    vlSelf->__PVT__const_mem___05Frecv_const___05Fval = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fval) 
                  & ((((((((((((3U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                >> 5U))) 
                               | (4U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                  >> 5U)))) 
                              | (5U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                 >> 5U)))) 
                             | (6U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                >> 5U)))) 
                            | (7U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                               >> 5U)))) 
                           | (8U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                              >> 5U)))) 
                          | (0x14U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                >> 5U)))) 
                         | (0x15U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                               >> 5U)))) 
                        | (0U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                           >> 5U)))) 
                       | (0x1cU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                             >> 5U)))) 
                      | (0x1dU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                            >> 5U)))) 
                     | (0x1eU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                           >> 5U)))))))) {
        if (((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fval) 
             & (0x1a0U == (0x3e0U & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U])))) {
            __PVT__const_mem___05Frecv_const___05Fmsg[0U] 
                = ((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[5U] 
                    << 0x1eU) | (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[4U] 
                                 >> 2U));
            __PVT__const_mem___05Frecv_const___05Fmsg[1U] 
                = ((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                    << 0x1eU) | (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[5U] 
                                 >> 2U));
            __PVT__const_mem___05Frecv_const___05Fmsg[2U] 
                = (7U & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                         >> 2U));
            vlSelf->__PVT__const_mem___05Frecv_const___05Fval = 1U;
        }
    }
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[0U] 
        = vlSelf->__PVT__send_data___05Frdy[0U];
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[1U] 
        = vlSelf->__PVT__send_data___05Frdy[1U];
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[2U] 
        = vlSelf->__PVT__send_data___05Frdy[2U];
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[3U] 
        = vlSelf->__PVT__send_data___05Frdy[3U];
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy[0U] 
        = vlSelf->__PVT__send_data___05Frdy[0U];
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy[1U] 
        = vlSelf->__PVT__send_data___05Frdy[1U];
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy[2U] 
        = vlSelf->__PVT__send_data___05Frdy[2U];
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy[3U] 
        = vlSelf->__PVT__send_data___05Frdy[3U];
    if (((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fval) 
         & ((((((((((((3U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                       >> 5U))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                       >> 5U)))) 
                     | (5U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                        >> 5U)))) | 
                    (6U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                     >> 5U)))) | (7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                      >> 5U)))) 
                  | (8U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                     >> 5U)))) | (0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                      >> 5U)))) 
                | (0x15U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                      >> 5U)))) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                       >> 5U)))) 
              | (0x1cU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                    >> 5U)))) | (0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                     >> 5U)))) 
            | (0x1eU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                  >> 5U)))))) {
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[0U];
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[1U];
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[2U];
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[3U];
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[4U];
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[5U];
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[6U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U];
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[7U] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[7U];
    }
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U];
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U];
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U];
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U];
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U];
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U];
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[6U];
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[7U];
    if (((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fval) 
         & ((((((((((((3U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                       >> 5U))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                       >> 5U)))) 
                     | (5U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                        >> 5U)))) | 
                    (6U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                     >> 5U)))) | (7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                      >> 5U)))) 
                  | (8U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                     >> 5U)))) | (0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                      >> 5U)))) 
                | (0x15U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                      >> 5U)))) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                       >> 5U)))) 
              | (0x1cU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                    >> 5U)))) | (0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                     >> 5U)))) 
            | (0x1eU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                  >> 5U)))))) {
        __PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 1U;
    }
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__ctrl___05Fwen 
        = ((IData)(__PVT__ctrl_mem___05Frecv_pkt_from_controller___05Fval) 
           & (2U > (IData)(vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__const_mem__DOT__reg_file___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__const_mem__DOT__reg_file___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__const_mem__DOT__reg_file___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__const_mem__DOT__reg_file___05Fwdata[0U][2U] = 0U;
    vlSelf->__PVT__const_mem__DOT__reg_file___05Fwen[0U] = 0U;
    __PVT__const_mem__DOT_____05Ftmpvar___05Fload_const_not_full 
        = (0x10U > (IData)(vlSelf->__PVT__const_mem__DOT__wr_cur));
    __PVT__const_mem___05Frecv_const___05Frdy = __PVT__const_mem__DOT_____05Ftmpvar___05Fload_const_not_full;
    if (((IData)(vlSelf->__PVT__const_mem___05Frecv_const___05Fval) 
         & (IData)(__PVT__const_mem__DOT_____05Ftmpvar___05Fload_const_not_full))) {
        vlSelf->__PVT__const_mem__DOT__reg_file___05Fwaddr[0U] 
            = (0xfU & (IData)(vlSelf->__PVT__const_mem__DOT__wr_cur));
        vlSelf->__PVT__const_mem__DOT__reg_file___05Fwdata[0U][0U] 
            = __PVT__const_mem___05Frecv_const___05Fmsg[0U];
        vlSelf->__PVT__const_mem__DOT__reg_file___05Fwdata[0U][1U] 
            = __PVT__const_mem___05Frecv_const___05Fmsg[1U];
        vlSelf->__PVT__const_mem__DOT__reg_file___05Fwdata[0U][2U] 
            = __PVT__const_mem___05Frecv_const___05Fmsg[2U];
        vlSelf->__PVT__const_mem__DOT__reg_file___05Fwen[0U] = 1U;
    }
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector = 0U;
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0xfeU & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | ((0U >= vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U]) || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [0U]));
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0xfdU & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | (((0U >= vlSelf->__PVT__fu_crossbar__DOT__in_dir
                [1U]) || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
               [1U]) << 1U));
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0xfbU & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | (((0U >= vlSelf->__PVT__fu_crossbar__DOT__in_dir
                [2U]) || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
               [2U]) << 2U));
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0xf7U & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | (((0U >= vlSelf->__PVT__fu_crossbar__DOT__in_dir
                [3U]) || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
               [3U]) << 3U));
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0xefU & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | (((1U & (~ ((0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
                          [4U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
               || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
               [4U]) << 4U));
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0xdfU & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | (((1U & (~ ((0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
                          [5U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
               || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
               [5U]) << 5U));
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0xbfU & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | (((1U & (~ ((0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
                          [6U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
               || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
               [6U]) << 6U));
    vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector 
        = ((0x7fU & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector)) 
           | (((1U & (~ ((0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
                          [7U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
               || vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
               [7U]) << 7U));
    vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__recv_from_controller_pkt___05Frdy = 0U;
    if (((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fval) 
         & ((((((((((((3U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                       >> 5U))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                       >> 5U)))) 
                     | (5U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                        >> 5U)))) | 
                    (6U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                     >> 5U)))) | (7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                      >> 5U)))) 
                  | (8U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                     >> 5U)))) | (0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                      >> 5U)))) 
                | (0x15U == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                      >> 5U)))) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                       >> 5U)))) 
              | (0x1cU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                    >> 5U)))) | (0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                                     >> 5U)))) 
            | (0x1eU == (0x1fU & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U] 
                                  >> 5U)))))) {
        vlSelf->__PVT__recv_from_controller_pkt___05Frdy 
            = (2U > (IData)(vlSelf->__PVT__ctrl_mem__DOT__recv_pkt_from_controller_queue__DOT__ctrl___05Fcount));
    } else if (((IData)(vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fval) 
                & (0x1a0U == (0x3e0U & vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15.__PVT__send___05Fmsg[6U])))) {
        vlSelf->__PVT__recv_from_controller_pkt___05Frdy 
            = __PVT__const_mem___05Frecv_const___05Frdy;
    }
}
