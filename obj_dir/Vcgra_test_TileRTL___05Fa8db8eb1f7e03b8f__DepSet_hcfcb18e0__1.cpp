// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_TileRTL___05Fa8db8eb1f7e03b8f.h"

VL_INLINE_OPT void Vcgra_test_TileRTL___05Fa8db8eb1f7e03b8f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F0__5(Vcgra_test_TileRTL___05Fa8db8eb1f7e03b8f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_TileRTL___05Fa8db8eb1f7e03b8f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F0__5\n"); );
    // Init
    CData/*0:0*/ __Vcellout__tile_out_or_link___05F0__send___05Fval;
    __Vcellout__tile_out_or_link___05F0__send___05Fval = 0;
    QData/*34:0*/ __Vcellout__tile_out_or_link___05F0__send___05Fmsg;
    __Vcellout__tile_out_or_link___05F0__send___05Fmsg = 0;
    CData/*0:0*/ __Vcellout__tile_out_or_link___05F1__send___05Fval;
    __Vcellout__tile_out_or_link___05F1__send___05Fval = 0;
    QData/*34:0*/ __Vcellout__tile_out_or_link___05F1__send___05Fmsg;
    __Vcellout__tile_out_or_link___05F1__send___05Fmsg = 0;
    CData/*0:0*/ __Vcellout__tile_out_or_link___05F2__send___05Fval;
    __Vcellout__tile_out_or_link___05F2__send___05Fval = 0;
    QData/*34:0*/ __Vcellout__tile_out_or_link___05F2__send___05Fmsg;
    __Vcellout__tile_out_or_link___05F2__send___05Fmsg = 0;
    CData/*0:0*/ __Vcellout__tile_out_or_link___05F3__send___05Fval;
    __Vcellout__tile_out_or_link___05F3__send___05Fval = 0;
    QData/*34:0*/ __Vcellout__tile_out_or_link___05F3__send___05Fmsg;
    __Vcellout__tile_out_or_link___05F3__send___05Fmsg = 0;
    CData/*0:0*/ element__DOT____Vlvbound_hcd9f4392__0;
    element__DOT____Vlvbound_hcd9f4392__0 = 0;
    CData/*0:0*/ element__DOT____Vlvbound_hb7e46084__0;
    element__DOT____Vlvbound_hb7e46084__0 = 0;
    CData/*0:0*/ element__DOT____Vlvbound_h0ab6e9f1__0;
    element__DOT____Vlvbound_h0ab6e9f1__0 = 0;
    CData/*0:0*/ element__DOT____Vlvbound_h01263111__0;
    element__DOT____Vlvbound_h01263111__0 = 0;
    CData/*0:0*/ __PVT__fu_crossbar__DOT__all_send_accepted;
    __PVT__fu_crossbar__DOT__all_send_accepted = 0;
    CData/*7:0*/ __PVT__fu_crossbar__DOT__recv_valid_or_prologue_allowing_vector;
    __PVT__fu_crossbar__DOT__recv_valid_or_prologue_allowing_vector = 0;
    CData/*7:0*/ __PVT__fu_crossbar__DOT__recv_valid_vector;
    __PVT__fu_crossbar__DOT__recv_valid_vector = 0;
    CData/*0:0*/ __PVT__routing_crossbar__DOT__all_send_accepted;
    __PVT__routing_crossbar__DOT__all_send_accepted = 0;
    CData/*7:0*/ __PVT__routing_crossbar__DOT__send_rdy_vector;
    __PVT__routing_crossbar__DOT__send_rdy_vector = 0;
    IData/*31:0*/ __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr;
    __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr = 0;
    // Body
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [0U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3ffeU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | (IData)(element__DOT____Vlvbound_hcd9f4392__0));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [1U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3ffdU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 1U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [2U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3ffbU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 2U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [3U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3ff7U & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 3U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [4U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3fefU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 4U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [5U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3fdfU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 5U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [6U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3fbfU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 6U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [7U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3f7fU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 7U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [8U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3effU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 8U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [9U];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3dffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 9U));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [0xaU];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x3bffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 0xaU));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [0xbU];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x37ffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 0xbU));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [0xcU];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x2fffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 0xcU));
    element__DOT____Vlvbound_hcd9f4392__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_const___05Frdy
        [0xdU];
    vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector 
        = ((0x1fffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hcd9f4392__0) 
              << 0xdU));
    vlSelf->__PVT__element___05Frecv_const___05Frdy 
        = (0U != (IData)(vlSelf->__PVT__element__DOT__fu_recv_const_rdy_vector));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [0U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3ffeU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | (IData)(element__DOT____Vlvbound_hb7e46084__0));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [1U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3ffdU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 1U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [2U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3ffbU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 2U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [3U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3ff7U & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 3U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [4U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3fefU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 4U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [5U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3fdfU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 5U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [6U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3fbfU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 6U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [7U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3f7fU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 7U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [8U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3effU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 8U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [9U];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3dffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 9U));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [0xaU];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x3bffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 0xaU));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [0xbU];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x37ffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 0xbU));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [0xcU];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x2fffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 0xcU));
    element__DOT____Vlvbound_hb7e46084__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_opt___05Frdy
        [0xdU];
    vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector 
        = ((0x1fffU & (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
           | ((IData)(element__DOT____Vlvbound_hb7e46084__0) 
              << 0xdU));
    vlSelf->__PVT__element___05Frecv_opt___05Frdy = 
        ((0U != (IData)(vlSelf->__PVT__element__DOT__fu_recv_opt_rdy_vector)) 
         | (0U != (IData)(vlSelf->__PVT__ctrl_mem___05Fprologue_count_outport_fu)));
    vlSelf->__PVT__element___05Frecv_in___05Frdy[0U] = 0U;
    vlSelf->__PVT__element___05Frecv_in___05Frdy[1U] = 0U;
    vlSelf->__PVT__element___05Frecv_in___05Frdy[2U] = 0U;
    vlSelf->__PVT__element___05Frecv_in___05Frdy[3U] = 0U;
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3ffeU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | (IData)(element__DOT____Vlvbound_h01263111__0));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [1U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3ffdU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 1U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [2U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3ffbU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 2U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [3U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3ff7U & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 3U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [4U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3fefU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 4U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [5U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3fdfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 5U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [6U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3fbfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 6U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [7U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3f7fU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 7U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [8U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3effU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 8U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [9U][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3dffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 9U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xaU][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x3bffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xaU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xbU][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x37ffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xbU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xcU][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x2fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xcU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xdU][0U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[0U] 
        = ((0x1fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [0U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xdU));
    vlSelf->__PVT__element___05Frecv_in___05Frdy[0U] 
        = (0U != vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
           [0U]);
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3ffeU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | (IData)(element__DOT____Vlvbound_h01263111__0));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [1U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3ffdU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 1U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [2U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3ffbU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 2U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [3U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3ff7U & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 3U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [4U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3fefU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 4U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [5U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3fdfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 5U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [6U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3fbfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 6U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [7U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3f7fU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 7U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [8U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3effU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 8U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [9U][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3dffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 9U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xaU][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x3bffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xaU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xbU][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x37ffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xbU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xcU][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x2fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xcU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xdU][1U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[1U] 
        = ((0x1fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [1U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xdU));
    vlSelf->__PVT__element___05Frecv_in___05Frdy[1U] 
        = (0U != vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
           [1U]);
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3ffeU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | (IData)(element__DOT____Vlvbound_h01263111__0));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [1U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3ffdU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 1U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [2U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3ffbU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 2U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [3U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3ff7U & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 3U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [4U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3fefU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 4U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [5U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3fdfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 5U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [6U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3fbfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 6U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [7U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3f7fU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 7U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [8U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3effU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 8U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [9U][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3dffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 9U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xaU][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x3bffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xaU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xbU][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x37ffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xbU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xcU][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x2fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xcU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xdU][2U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[2U] 
        = ((0x1fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [2U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xdU));
    vlSelf->__PVT__element___05Frecv_in___05Frdy[2U] 
        = (0U != vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
           [2U]);
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3ffeU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | (IData)(element__DOT____Vlvbound_h01263111__0));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [1U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3ffdU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 1U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [2U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3ffbU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 2U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [3U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3ff7U & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 3U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [4U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3fefU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 4U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [5U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3fdfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 5U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [6U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3fbfU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 6U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [7U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3f7fU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 7U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [8U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3effU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 8U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [9U][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3dffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 9U));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xaU][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x3bffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xaU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xbU][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x37ffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xbU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xcU][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x2fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xcU));
    element__DOT____Vlvbound_h01263111__0 = vlSelf->__PVT__element__DOT__fu___05Frecv_in___05Frdy
        [0xdU][3U];
    vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector[3U] 
        = ((0x1fffU & vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
            [3U]) | ((IData)(element__DOT____Vlvbound_h01263111__0) 
                     << 0xdU));
    vlSelf->__PVT__element___05Frecv_in___05Frdy[3U] 
        = (0U != vlSelf->__PVT__element__DOT__fu_recv_in_rdy_vector
           [3U]);
    vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] = 0ULL;
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [1U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [1U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [1U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [1U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [2U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [2U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [2U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [2U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [3U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [3U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [3U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [3U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [4U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [4U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [4U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [4U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [5U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [5U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [5U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [5U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [6U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [6U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [6U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [6U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [7U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [7U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [7U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [7U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [8U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [8U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [8U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [8U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [9U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [9U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [9U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [9U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xaU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xaU][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xaU][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xaU][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xbU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xbU][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xbU][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xbU][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xcU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xcU][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xcU][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xcU][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xdU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xdU][0U];
    }
    vlSelf->__PVT__element___05Fsend_out___05Fval[0U] = 0U;
    vlSelf->__PVT__element___05Fsend_out___05Fval[1U] = 0U;
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [1U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [1U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [1U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [1U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [2U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [2U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [2U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [2U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [3U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [3U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [3U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [3U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [4U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [4U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [4U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [4U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [5U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [5U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [5U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [5U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [6U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [6U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [6U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [6U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [7U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [7U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [7U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [7U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [8U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [8U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [8U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [8U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [9U][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [9U][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [9U][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [9U][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xaU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xaU][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xaU][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xaU][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xbU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xbU][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xbU][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xbU][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xcU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xcU][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xcU][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xcU][1U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xdU][0U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fval[0U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xdU][0U];
    }
    if (vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
        [0xdU][1U]) {
        vlSelf->__PVT__element___05Fsend_out___05Fmsg[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fmsg
            [0xdU][1U];
        vlSelf->__PVT__element___05Fsend_out___05Fval[1U] 
            = vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Fval
            [0xdU][1U];
    }
    vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy[0U] 
        = vlSelf->__PVT__element___05Frecv_in___05Frdy
        [0U];
    vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy[1U] 
        = vlSelf->__PVT__element___05Frecv_in___05Frdy
        [1U];
    vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy[2U] 
        = vlSelf->__PVT__element___05Frecv_in___05Frdy
        [2U];
    vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy[3U] 
        = vlSelf->__PVT__element___05Frecv_in___05Frdy
        [3U];
    vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg[0U] 
        = vlSelf->__PVT__element___05Fsend_out___05Fmsg
        [0U];
    vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg[1U] 
        = vlSelf->__PVT__element___05Fsend_out___05Fmsg
        [1U];
    vlSelf->__PVT__fu_crossbar__DOT__recv_data_val[0U] 
        = vlSelf->__PVT__element___05Fsend_out___05Fval
        [0U];
    vlSelf->__PVT__fu_crossbar__DOT__recv_data_val[1U] 
        = vlSelf->__PVT__element___05Fsend_out___05Fval
        [1U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[0U] = 0U;
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[1U] = 0U;
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[2U] = 0U;
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[3U] = 0U;
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[0U] 
        = vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy
        [0U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[1U] 
        = vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy
        [1U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[2U] 
        = vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy
        [2U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy[3U] 
        = vlSelf->__PVT__register_cluster___05Fsend_data_to_fu___05Frdy
        [3U];
    __PVT__fu_crossbar__DOT__recv_valid_vector = 0U;
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0xfeU 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | ((0U 
                                                      >= 
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                      [0U]) 
                                                     || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                     [
                                                     vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                     [0U]]));
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0xfdU 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | (((0U 
                                                       >= 
                                                       vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                       [1U]) 
                                                      || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [1U]]) 
                                                     << 1U));
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0xfbU 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | (((0U 
                                                       >= 
                                                       vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                       [2U]) 
                                                      || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [2U]]) 
                                                     << 2U));
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0xf7U 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | (((0U 
                                                       >= 
                                                       vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                       [3U]) 
                                                      || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [3U]]) 
                                                     << 3U));
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0xefU 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | (((0U 
                                                       >= 
                                                       vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                       [4U]) 
                                                      || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [4U]]) 
                                                     << 4U));
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0xdfU 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | (((0U 
                                                       >= 
                                                       vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                       [5U]) 
                                                      || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [5U]]) 
                                                     << 5U));
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0xbfU 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | (((0U 
                                                       >= 
                                                       vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                       [6U]) 
                                                      || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [6U]]) 
                                                     << 6U));
    __PVT__fu_crossbar__DOT__recv_valid_vector = ((0x7fU 
                                                   & (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                                                  | (((0U 
                                                       >= 
                                                       vlSelf->__PVT__fu_crossbar__DOT__in_dir
                                                       [7U]) 
                                                      || vlSelf->__PVT__fu_crossbar__DOT__recv_data_val
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [7U]]) 
                                                     << 7U));
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[4U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy
        [0U];
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[5U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy
        [1U];
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[6U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy
        [2U];
    vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy[7U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_routing_crossbar___05Frdy
        [3U];
    __PVT__fu_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((IData)(__PVT__fu_crossbar__DOT__recv_valid_vector) 
           | (IData)(vlSelf->__PVT__fu_crossbar__DOT__prologue_allowing_vector));
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[0U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[1U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[2U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[3U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[4U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[5U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[6U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[7U] = 0ULL;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[0U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[1U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[2U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[3U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[4U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[5U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[6U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[7U] = 0U;
    __PVT__routing_crossbar__DOT__send_rdy_vector = 0U;
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0xfeU & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | ((0U >= vlSelf->__PVT__routing_crossbar__DOT__in_dir
             [0U]) || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
            [0U]));
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0xfdU & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | (((0U >= vlSelf->__PVT__routing_crossbar__DOT__in_dir
              [1U]) || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
             [1U]) << 1U));
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0xfbU & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | (((0U >= vlSelf->__PVT__routing_crossbar__DOT__in_dir
              [2U]) || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
             [2U]) << 2U));
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0xf7U & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | (((0U >= vlSelf->__PVT__routing_crossbar__DOT__in_dir
              [3U]) || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
             [3U]) << 3U));
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0xefU & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | (((1U & (~ ((0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                        [4U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
             || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
             [4U]) << 4U));
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0xdfU & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | (((1U & (~ ((0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                        [5U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
             || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
             [5U]) << 5U));
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0xbfU & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | (((1U & (~ ((0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                        [6U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
             || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
             [6U]) << 6U));
    __PVT__routing_crossbar__DOT__send_rdy_vector = 
        ((0x7fU & (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector)) 
         | (((1U & (~ ((0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                        [7U]) & (~ (IData)(vlSelf->__PVT__element_done))))) 
             || vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
             [7U]) << 7U));
    vlSelf->__PVT__fu_crossbar___05Frecv_data___05Frdy[0U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Frecv_data___05Frdy[1U] = 0U;
    vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy = 0U;
    __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
    if (((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x7fU & (vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 0x10U))))) {
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector)) 
             & (~ (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[0U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [0U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [0U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                 >> 1U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                               >> 1U)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[1U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [1U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [1U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[1U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [1U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [1U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                 >> 2U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                               >> 2U)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[2U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [2U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [2U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[2U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [2U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [2U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                 >> 3U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                               >> 3U)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[3U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [3U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [3U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[3U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [3U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [3U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                 >> 4U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                               >> 4U)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[4U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [4U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [4U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[4U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [4U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [4U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                 >> 5U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                               >> 5U)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[5U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [5U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [5U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[5U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [5U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [5U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                 >> 6U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                               >> 6U)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[6U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [6U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [6U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[6U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [6U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [6U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if ((((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
              & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                 >> 7U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                               >> 7U)))) {
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[7U] 
                = ((7ULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [7U]) | ((QData)((IData)((IData)(
                                                     (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                      [7U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg[7U] 
                = ((0x7fffffffbULL & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                    [7U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlSelf->__PVT__fu_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                                                            [7U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
    }
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg[0U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
        [4U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg[1U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
        [5U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg[2U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
        [6U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg[3U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
        [7U];
    __Vcellout__tile_out_or_link___05F0__send___05Fmsg = 0ULL;
    __Vcellout__tile_out_or_link___05F0__send___05Fmsg 
        = ((3ULL & __Vcellout__tile_out_or_link___05F0__send___05Fmsg) 
           | (((QData)((IData)(((IData)((vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                         [0U] >> 3U)) 
                                | (IData)((vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                           [0U] >> 3U))))) 
               << 3U) | ((QData)((IData)((1U & ((IData)(
                                                        (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                                         [0U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                                           [0U] 
                                                           >> 2U)))))) 
                         << 2U)));
    __Vcellout__tile_out_or_link___05F1__send___05Fmsg = 0ULL;
    __Vcellout__tile_out_or_link___05F1__send___05Fmsg 
        = ((3ULL & __Vcellout__tile_out_or_link___05F1__send___05Fmsg) 
           | (((QData)((IData)(((IData)((vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                         [1U] >> 3U)) 
                                | (IData)((vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                           [1U] >> 3U))))) 
               << 3U) | ((QData)((IData)((1U & ((IData)(
                                                        (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                                         [1U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                                           [1U] 
                                                           >> 2U)))))) 
                         << 2U)));
    __Vcellout__tile_out_or_link___05F2__send___05Fmsg = 0ULL;
    __Vcellout__tile_out_or_link___05F2__send___05Fmsg 
        = ((3ULL & __Vcellout__tile_out_or_link___05F2__send___05Fmsg) 
           | (((QData)((IData)(((IData)((vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                         [2U] >> 3U)) 
                                | (IData)((vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                           [2U] >> 3U))))) 
               << 3U) | ((QData)((IData)((1U & ((IData)(
                                                        (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                                         [2U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                                           [2U] 
                                                           >> 2U)))))) 
                         << 2U)));
    __Vcellout__tile_out_or_link___05F3__send___05Fmsg = 0ULL;
    __Vcellout__tile_out_or_link___05F3__send___05Fmsg 
        = ((3ULL & __Vcellout__tile_out_or_link___05F3__send___05Fmsg) 
           | (((QData)((IData)(((IData)((vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                         [3U] >> 3U)) 
                                | (IData)((vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                           [3U] >> 3U))))) 
               << 3U) | ((QData)((IData)((1U & ((IData)(
                                                        (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fmsg
                                                         [3U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fmsg
                                                           [3U] 
                                                           >> 2U)))))) 
                         << 2U)));
    if (((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x7fU & (vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 0x10U))))) {
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[0U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector)) 
               & (~ (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted)));
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[1U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                   >> 1U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                 >> 1U)));
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[2U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                   >> 2U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                 >> 2U)));
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[3U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                   >> 3U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                 >> 3U)));
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[4U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                   >> 4U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                 >> 4U)));
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[5U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                   >> 5U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                 >> 5U)));
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[6U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                   >> 6U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                 >> 6U)));
        vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval[7U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                   >> 7U)) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                 >> 7U)));
    }
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval[0U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
        [4U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval[1U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
        [5U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval[2U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
        [6U];
    vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval[3U] 
        = vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
        [7U];
    __Vcellout__tile_out_or_link___05F0__send___05Fval 
        = (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
           [0U] | vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
           [0U]);
    __Vcellout__tile_out_or_link___05F1__send___05Fval 
        = (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
           [1U] | vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
           [1U]);
    __Vcellout__tile_out_or_link___05F2__send___05Fval 
        = (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
           [2U] | vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
           [2U]);
    __Vcellout__tile_out_or_link___05F3__send___05Fval 
        = (vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
           [3U] | vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
           [3U]);
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[0U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[1U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[2U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[3U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[4U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[5U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[6U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[7U] = 0U;
    vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy = 0U;
    __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
    if (((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x7fU & (vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 0x10U))))) {
        __PVT__fu_crossbar__DOT__all_send_accepted = 1U;
        if ((1U & (((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                    & (~ (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted))) 
                   & (~ (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                     >> 1U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                  >> 1U))) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector) 
                                                 >> 1U))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                     >> 2U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                  >> 2U))) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector) 
                                                 >> 2U))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                     >> 3U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                  >> 3U))) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector) 
                                                 >> 3U))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                     >> 4U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                  >> 4U))) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector) 
                                                 >> 4U))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                     >> 5U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                  >> 5U))) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector) 
                                                 >> 5U))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                     >> 6U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                  >> 6U))) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector) 
                                                 >> 6U))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((IData)(((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                       >> 7U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                                    >> 7U))) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_rdy_vector) 
                                                   >> 7U))))) {
            __PVT__fu_crossbar__DOT__all_send_accepted = 0U;
        }
        vlSelf->__PVT__fu_crossbar___05Frecv_data___05Frdy[0U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__fu_crossbar__DOT__all_send_accepted)) 
               & (IData)(vlSelf->__PVT__fu_crossbar__DOT__recv_required_vector));
        vlSelf->__PVT__fu_crossbar___05Frecv_data___05Frdy[1U] 
            = (((0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__fu_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__fu_crossbar__DOT__recv_required_vector) 
                  >> 1U));
        vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy 
            = ((IData)(__PVT__fu_crossbar__DOT__all_send_accepted) 
               & (0xffU == (IData)(__PVT__fu_crossbar__DOT__recv_valid_or_prologue_allowing_vector)));
    }
    vlSelf->__PVT__element___05Fsend_out___05Frdy[0U] 
        = vlSelf->__PVT__fu_crossbar___05Frecv_data___05Frdy
        [0U];
    vlSelf->__PVT__element___05Fsend_out___05Frdy[1U] 
        = vlSelf->__PVT__fu_crossbar___05Frecv_data___05Frdy
        [1U];
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (0U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [1U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [1U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [1U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [1U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (1U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [1U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [1U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[1U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [1U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [2U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [2U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [2U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [2U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (2U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [2U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [2U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[2U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [2U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [3U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [3U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [3U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [3U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (3U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [3U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [3U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[3U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [3U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [4U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [4U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [4U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [4U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (4U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [4U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [4U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[4U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [4U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [5U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [5U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [5U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [5U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (5U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [5U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [5U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[5U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [5U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [6U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [6U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [6U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [6U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (6U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [6U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [6U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[6U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [6U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [7U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [7U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [7U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [7U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (7U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [7U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [7U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[7U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [7U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [8U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [8U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [8U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [8U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (8U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [8U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [8U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[8U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [8U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [9U][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [9U][0U] 
                                             < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [9U][0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [9U][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (9U == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [9U][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [9U][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[9U][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [9U][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xaU][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xaU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xaU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xaU][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (0xaU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xaU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xaU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xaU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xaU][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xbU][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xbU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xbU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xbU][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (0xbU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xbU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xbU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xbU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xbU][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xcU][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xcU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xcU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xcU][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (0xcU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xcU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xcU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xcU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xcU][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xdU][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xdU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xdU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xdU][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (0xdU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xdU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xdU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xdU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xdU][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xeU][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xeU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xeU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xeU][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (0xeU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xeU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xeU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xeU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xeU][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xfU][0U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [0U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [1U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [2U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [3U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [4U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [5U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [6U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & (~ vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
                         [7U])) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                   [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                                             [0xfU]
                                             [0U] < 
                                             vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                                             [0xfU]
                                             [0U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][0U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][0U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
        = vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
        [0xfU][1U];
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [0U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [0U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [1U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [1U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [2U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [2U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [3U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [3U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [4U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [4U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [5U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [5U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [6U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [6U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    if ((((((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
            & (0U < vlSelf->__PVT__fu_crossbar__DOT__in_dir
               [7U])) & vlSelf->__PVT__fu_crossbar__DOT__in_dir_local
           [7U]) & (0xfU == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                    [0U])) & (vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                              [0xfU][1U] < vlSelf->__PVT__fu_crossbar__DOT__prologue_count_wire
                              [0xfU][1U]))) {
        vlSelf->__PVT__fu_crossbar__DOT__prologue_counter_next[0xfU][1U] 
            = (7U & ((IData)(1U) + vlSelf->__PVT__fu_crossbar__DOT__prologue_counter
                     [0xfU][1U]));
    }
    vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
        = vlSelf->__PVT__fu_crossbar__DOT__send_accepted;
    if (((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x7fU & (vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 0x10U))))) {
        if (((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
               & (~ (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted))) 
              & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [0U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [0U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (1U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                >> 1U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                             >> 1U))) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [1U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [1U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (2U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                >> 2U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                             >> 2U))) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [2U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [2U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (4U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                >> 3U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                             >> 3U))) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [3U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [3U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (8U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                >> 4U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                             >> 4U))) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [4U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [4U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (0x10U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                >> 5U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                             >> 5U))) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [5U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [5U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (0x20U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                >> 6U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                             >> 6U))) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [6U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [6U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (0x40U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_required_vector) 
                >> 7U) & (~ ((IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted) 
                             >> 7U))) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Frdy
              [7U]) & vlSelf->__PVT__fu_crossbar___05Fsend_data___05Fval
             [7U])) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next 
                = (0x80U | (IData)(vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next));
        }
        if (vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) {
            vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next = 0U;
        }
    } else {
        vlSelf->__PVT__fu_crossbar__DOT__send_accepted_next = 0U;
    }
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_wdata[0U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg
        [0U];
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_wdata[1U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg
        [1U];
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_wdata[2U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg
        [2U];
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_wdata[3U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fmsg
        [3U];
    vlSelf->__PVT__send_data___05Fmsg[0U] = __Vcellout__tile_out_or_link___05F0__send___05Fmsg;
    vlSelf->__PVT__send_data___05Fmsg[1U] = __Vcellout__tile_out_or_link___05F1__send___05Fmsg;
    vlSelf->__PVT__send_data___05Fmsg[2U] = __Vcellout__tile_out_or_link___05F2__send___05Fmsg;
    vlSelf->__PVT__send_data___05Fmsg[3U] = __Vcellout__tile_out_or_link___05F3__send___05Fmsg;
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_valid[0U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval
        [0U];
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_valid[1U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval
        [1U];
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_valid[2U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval
        [2U];
    vlSelf->__PVT__register_cluster__DOT__reg_bank___05Finport_valid[3U][1U] 
        = vlSelf->__PVT__register_cluster___05Frecv_data_from_fu_crossbar___05Fval
        [3U];
    vlSelf->__PVT__send_data___05Fval[0U] = __Vcellout__tile_out_or_link___05F0__send___05Fval;
    vlSelf->__PVT__send_data___05Fval[1U] = __Vcellout__tile_out_or_link___05F1__send___05Fval;
    vlSelf->__PVT__send_data___05Fval[2U] = __Vcellout__tile_out_or_link___05F2__send___05Fval;
    vlSelf->__PVT__send_data___05Fval[3U] = __Vcellout__tile_out_or_link___05F3__send___05Fval;
    if (((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x7fU & (vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 0x10U))))) {
        __PVT__routing_crossbar__DOT__all_send_accepted = 1U;
        if ((1U & (((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                    & (~ (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted))) 
                   & (~ (IData)(__PVT__routing_crossbar__DOT__send_rdy_vector))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                     >> 1U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                                  >> 1U))) & (~ ((IData)(__PVT__routing_crossbar__DOT__send_rdy_vector) 
                                                 >> 1U))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                     >> 2U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                                  >> 2U))) & (~ ((IData)(__PVT__routing_crossbar__DOT__send_rdy_vector) 
                                                 >> 2U))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                     >> 3U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                                  >> 3U))) & (~ ((IData)(__PVT__routing_crossbar__DOT__send_rdy_vector) 
                                                 >> 3U))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                     >> 4U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                                  >> 4U))) & (~ ((IData)(__PVT__routing_crossbar__DOT__send_rdy_vector) 
                                                 >> 4U))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                     >> 5U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                                  >> 5U))) & (~ ((IData)(__PVT__routing_crossbar__DOT__send_rdy_vector) 
                                                 >> 5U))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((1U & ((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                     >> 6U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                                  >> 6U))) & (~ ((IData)(__PVT__routing_crossbar__DOT__send_rdy_vector) 
                                                 >> 6U))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        if ((IData)(((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                       >> 7U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                                    >> 7U))) & (~ ((IData)(__PVT__routing_crossbar__DOT__send_rdy_vector) 
                                                   >> 7U))))) {
            __PVT__routing_crossbar__DOT__all_send_accepted = 0U;
        }
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[0U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector));
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[1U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector) 
                  >> 1U));
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[2U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector) 
                  >> 2U));
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[3U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector) 
                  >> 3U));
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[4U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector) 
                  >> 4U));
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[5U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector) 
                  >> 5U));
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[6U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector) 
                  >> 6U));
        vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy[7U] 
            = (((0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_vector)) 
                & (IData)(__PVT__routing_crossbar__DOT__all_send_accepted)) 
               & ((IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_required_vector) 
                  >> 7U));
        vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy 
            = ((IData)(__PVT__routing_crossbar__DOT__all_send_accepted) 
               & (0xffU == (IData)(vlSelf->__PVT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)));
    }
    vlSelf->__PVT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy
           [0U]);
    vlSelf->__PVT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy
           [1U]);
    vlSelf->__PVT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy
           [2U]);
    vlSelf->__PVT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlSelf->__PVT__routing_crossbar___05Frecv_data___05Frdy
           [3U]);
    vlSelf->__PVT__ctrl_mem___05Fsend_ctrl___05Frdy 
        = ((((IData)(vlSelf->__PVT__element___05Frecv_opt___05Frdy) 
             | (IData)(vlSelf->__PVT__element_done)) 
            & ((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
               | (IData)(vlSelf->__PVT__routing_crossbar_done))) 
           & ((IData)(vlSelf->__PVT__fu_crossbar___05Frecv_opt___05Frdy) 
              | (IData)(vlSelf->__PVT__fu_crossbar_done)));
    vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
        = vlSelf->__PVT__routing_crossbar__DOT__send_accepted;
    if (((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x7fU & (vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 0x10U))))) {
        if (((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
               & (~ (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted))) 
              & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [0U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [0U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (1U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                >> 1U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                             >> 1U))) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [1U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [1U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (2U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                >> 2U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                             >> 2U))) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [2U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [2U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (4U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                >> 3U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                             >> 3U))) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [3U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [3U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (8U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                >> 4U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                             >> 4U))) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [4U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [4U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (0x10U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                >> 5U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                             >> 5U))) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [5U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [5U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (0x20U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                >> 6U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                             >> 6U))) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [6U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [6U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (0x40U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_required_vector) 
                >> 7U) & (~ ((IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted) 
                             >> 7U))) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Frdy
              [7U]) & vlSelf->__PVT__routing_crossbar___05Fsend_data___05Fval
             [7U])) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next 
                = (0x80U | (IData)(vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next));
        }
        if (vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) {
            vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next = 0U;
        }
    } else {
        vlSelf->__PVT__routing_crossbar__DOT__send_accepted_next = 0U;
    }
    __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr = 0U;
    while ((0x10U > __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)) {
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [0U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (0U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [0U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][0U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [0U]));
        }
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [1U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (1U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [1U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][1U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [1U]));
        }
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [2U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (2U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [2U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][2U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [2U]));
        }
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [3U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (3U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [3U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][3U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [3U]));
        }
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [4U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (4U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [4U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][4U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [4U]));
        }
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [5U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (5U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [5U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][5U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [5U]));
        }
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [6U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (6U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [6U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][6U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [6U]));
        }
        vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                     & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
            = vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
            [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
            [7U];
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [0U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [0U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [1U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [1U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [2U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [2U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [3U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [3U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [4U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [4U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [5U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [5U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [6U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [6U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        if ((((((IData)(vlSelf->__PVT__routing_crossbar___05Frecv_opt___05Frdy) 
                & (0U < vlSelf->__PVT__routing_crossbar__DOT__in_dir
                   [7U])) & (7U == vlSelf->__PVT__routing_crossbar__DOT__in_dir_local
                             [7U])) & ((0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr) 
                                       == vlSelf->__PVT__ctrl_mem__DOT__reg_file___05Fraddr
                                       [0U])) & (vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U] 
                                                 < 
                                                 vlSelf->__PVT__routing_crossbar__DOT__prologue_count_wire
                                                 [(0xfU 
                                                   & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                                                 [7U]))) {
            vlSelf->__PVT__routing_crossbar__DOT__prologue_counter_next[(0xfU 
                                                                         & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)][7U] 
                = (7U & ((IData)(1U) + vlSelf->__PVT__routing_crossbar__DOT__prologue_counter
                         [(0xfU & __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr)]
                         [7U]));
        }
        __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr 
            = ((IData)(1U) + __PVT__routing_crossbar__DOT__update_prologue_counter_next__DOT__unnamedblk4__DOT__addr);
    }
    element__DOT____Vlvbound_h0ab6e9f1__0 = vlSelf->__PVT__element___05Fsend_out___05Frdy
        [0U];
    vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Frdy[0U][0U] 
        = element__DOT____Vlvbound_h0ab6e9f1__0;
    element__DOT____Vlvbound_h0ab6e9f1__0 = vlSelf->__PVT__element___05Fsend_out___05Frdy
        [1U];
    vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Frdy[0U][1U] 
        = element__DOT____Vlvbound_h0ab6e9f1__0;
    element__DOT____Vlvbound_h0ab6e9f1__0 = vlSelf->__PVT__element___05Fsend_out___05Frdy
        [0U];
    vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Frdy[1U][0U] 
        = element__DOT____Vlvbound_h0ab6e9f1__0;
    element__DOT____Vlvbound_h0ab6e9f1__0 = vlSelf->__PVT__element___05Fsend_out___05Frdy
        [1U];
    vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Frdy[1U][1U] 
        = element__DOT____Vlvbound_h0ab6e9f1__0;
    element__DOT____Vlvbound_h0ab6e9f1__0 = vlSelf->__PVT__element___05Fsend_out___05Frdy
        [0U];
    vlSelf->__PVT__element__DOT__fu___05Fsend_out___05Frdy[2U][0U] 
        = element__DOT____Vlvbound_h0ab6e9f1__0;
}
