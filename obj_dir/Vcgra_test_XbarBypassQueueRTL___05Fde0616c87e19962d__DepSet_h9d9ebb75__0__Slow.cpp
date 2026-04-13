// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d.h"

VL_ATTR_COLD void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__read_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__read_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    // Body
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_ATTR_COLD void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__write_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___stl_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__write_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    // Body
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_ATTR_COLD void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___ctor_var_reset(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__route_units___05Fsend___05Fmsg[__Vi0][__Vi1] = VL_RAND_RESET_Q(57);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__route_units___05Fsend___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
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
        vlSelf->__Vcellout__route_units___05F0__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F0__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F1__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F1__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F1__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F2__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F2__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F2__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F3__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F3__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F3__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F4__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F4__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F4__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F5__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F5__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F5__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F5__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F6__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F6__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F6__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F6__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F7__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__route_units___05F7__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__route_units___05F7__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__Vcellout__route_units___05F7__recv___05Frdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__switch_units___05Frecv___05Fmsg[__Vi0][__Vi1] = VL_RAND_RESET_Q(57);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__switch_units___05Frecv___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__switch_units___05Frecv___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F0__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F1__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vcellinp__switch_units___05F2__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->route_units___05F0__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->route_units___05F1__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->route_units___05F2__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->route_units___05F3__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->route_units___05F4__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->route_units___05F5__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->route_units___05F6__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->route_units___05F7__DOT____Vlvbound_h7616ffa4__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(8);
    vlSelf->__PVT__switch_units___05F0__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__switch_units___05F0__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(16);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(17);
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(8);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(8);
    vlSelf->__PVT__switch_units___05F1__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__switch_units___05F1__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(16);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(17);
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(8);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(8);
    vlSelf->__PVT__switch_units___05F2__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__switch_units___05F2__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(16);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(17);
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(8);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 = VL_RAND_RESET_I(1);
    vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 = VL_RAND_RESET_I(1);
}
