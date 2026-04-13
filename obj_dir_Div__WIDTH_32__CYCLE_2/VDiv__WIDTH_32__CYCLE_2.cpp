// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDiv__WIDTH_32__CYCLE_2.h for the primary calling header

#include "VDiv__WIDTH_32__CYCLE_2.h"
#include "VDiv__WIDTH_32__CYCLE_2__Syms.h"

//==========

VL_CTOR_IMP(VDiv__WIDTH_32__CYCLE_2) {
    VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp = __VlSymsp = new VDiv__WIDTH_32__CYCLE_2__Syms(this, name());
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDiv__WIDTH_32__CYCLE_2::__Vconfigure(VDiv__WIDTH_32__CYCLE_2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VDiv__WIDTH_32__CYCLE_2::~VDiv__WIDTH_32__CYCLE_2() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VDiv__WIDTH_32__CYCLE_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDiv__WIDTH_32__CYCLE_2::eval\n"); );
    VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("division.v", 139, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDiv__WIDTH_32__CYCLE_2::_eval_initial_loop(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("division.v", 139, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDiv__WIDTH_32__CYCLE_2::_settle__TOP__1(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_settle__TOP__1\n"); );
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i[0U] = VL_ULL(0);
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i[0U] = 0U;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg[0U] 
        = vlTOPp->divisor;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg[0U] 
        = vlTOPp->dividend;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i
        [0U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i
        [0U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1fU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x7fffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1eU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xbfffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1dU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xdfffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1cU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xefffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1bU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x8000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xf7ffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1aU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x4000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfbffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x19U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x2000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfdffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x18U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x1000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfeffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x17U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x800000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xff7fffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x16U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x400000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xffbfffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x15U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x200000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xffdfffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x14U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x100000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xffefffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x13U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfff7ffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x12U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfffbffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x11U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfffdffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x10U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfffeffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i
        [1U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i
        [1U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xfU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x8000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffff7fffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xeU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x4000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffbfffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xdU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x2000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffdfffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xcU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x1000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffefffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xbU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x800U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffff7ffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xaU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x400U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffbffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 9U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x200U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffdffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 8U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x100U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffeffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 7U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x80U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffff7fU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 6U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x40U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffffbfU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 5U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x20U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffffdfU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 4U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x10U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffffefU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 3U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (8U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffff7U & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 2U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (4U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffffbU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 1U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (2U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffffdU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & (QData)((IData)(
                                                               vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                               [1U])))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (1U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffffeU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o[0U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o[0U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o[1U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o[1U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q;
    vlTOPp->remainder = (IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o
                                [1U]);
    vlTOPp->quotient = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o
        [1U];
}

VL_INLINE_OPT void VDiv__WIDTH_32__CYCLE_2::_sequent__TOP__2(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_sequent__TOP__2\n"); );
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i__v0;
    IData/*31:0*/ __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg__v0;
    IData/*31:0*/ __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg__v0;
    QData/*32:0*/ __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i__v0;
    // Body
    __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i__v0 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o
           [0U]);
    __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i__v0 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o
           [0U]);
    __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg__v0 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
           [0U]);
    __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg__v0 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
           [0U]);
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i[1U] 
        = __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i__v0;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i[1U] 
        = __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i__v0;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg[1U] 
        = __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg__v0;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg[1U] 
        = __Vdlyvval__Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg__v0;
}

VL_INLINE_OPT void VDiv__WIDTH_32__CYCLE_2::_combo__TOP__3(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_combo__TOP__3\n"); );
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg[0U] 
        = vlTOPp->divisor;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg[0U] 
        = vlTOPp->dividend;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i
        [0U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i
        [0U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1fU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x7fffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1eU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xbfffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1dU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xdfffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1cU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xefffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1bU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x8000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xf7ffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x1aU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x4000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfbffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x19U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x2000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfdffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x18U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x1000000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfeffffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x17U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x800000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xff7fffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x16U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x400000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xffbfffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x15U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x200000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xffdfffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x14U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x100000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xffefffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x13U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x80000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfff7ffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x12U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x40000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfffbffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x11U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x20000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfffdffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [0U])) 
                                                >> 0x10U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [0U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [0U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0x10000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q 
            = (0xfffeffffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i
        [1U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i
        [1U];
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xfU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x8000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffff7fffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xeU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x4000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffbfffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xdU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x2000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffdfffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xcU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x1000U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffefffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xbU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x800U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffff7ffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 0xaU))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x400U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffbffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 9U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x200U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffdffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 8U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x100U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffeffU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 7U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x80U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffff7fU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 6U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x40U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffffbfU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 5U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x20U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffffdfU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 4U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0x10U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xffffffefU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 3U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (8U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffff7U & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 2U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (4U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffffbU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & ((QData)((IData)(
                                                                vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                                [1U])) 
                                                >> 1U))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (2U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffffdU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
        = (VL_ULL(0x1ffffffff) & ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                   << 1U) | (VL_ULL(1) 
                                             & (QData)((IData)(
                                                               vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg
                                                               [1U])))));
    if ((vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
         >= (QData)((IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                            [1U])))) {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
            = (VL_ULL(0x1ffffffff) & (vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r 
                                      - (QData)((IData)(
                                                        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg
                                                        [1U]))));
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (1U | vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    } else {
        vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q 
            = (0xfffffffeU & vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q);
    }
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o[0U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o[0U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o[1U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r;
    vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o[1U] 
        = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q;
    vlTOPp->remainder = (IData)(vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o
                                [1U]);
    vlTOPp->quotient = vlTOPp->Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o
        [1U];
}

void VDiv__WIDTH_32__CYCLE_2::_eval(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_eval\n"); );
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VDiv__WIDTH_32__CYCLE_2::_eval_initial(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_eval_initial\n"); );
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VDiv__WIDTH_32__CYCLE_2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::final\n"); );
    // Variables
    VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDiv__WIDTH_32__CYCLE_2::_eval_settle(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_eval_settle\n"); );
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VDiv__WIDTH_32__CYCLE_2::_change_request(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_change_request\n"); );
    VDiv__WIDTH_32__CYCLE_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDiv__WIDTH_32__CYCLE_2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void VDiv__WIDTH_32__CYCLE_2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDiv__WIDTH_32__CYCLE_2::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    dividend = VL_RAND_RESET_I(32);
    divisor = VL_RAND_RESET_I(32);
    quotient = VL_RAND_RESET_I(32);
    remainder = VL_RAND_RESET_I(32);
    reset = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i[__Vi0] = VL_RAND_RESET_Q(33);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o[__Vi0] = VL_RAND_RESET_Q(33);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r = VL_RAND_RESET_Q(33);
    Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q = VL_RAND_RESET_I(32);
    Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r = VL_RAND_RESET_Q(33);
    Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q = VL_RAND_RESET_I(32);
}
