// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMulRecFN__expWidth_9__sigWidth_23.h for the primary calling header

#include "VMulRecFN__expWidth_9__sigWidth_23.h"
#include "VMulRecFN__expWidth_9__sigWidth_23__Syms.h"

//==========

VL_CTOR_IMP(VMulRecFN__expWidth_9__sigWidth_23) {
    VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp = __VlSymsp = new VMulRecFN__expWidth_9__sigWidth_23__Syms(this, name());
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMulRecFN__expWidth_9__sigWidth_23::__Vconfigure(VMulRecFN__expWidth_9__sigWidth_23__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VMulRecFN__expWidth_9__sigWidth_23::~VMulRecFN__expWidth_9__sigWidth_23() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VMulRecFN__expWidth_9__sigWidth_23::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMulRecFN__expWidth_9__sigWidth_23::eval\n"); );
    VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/x/shiran/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v", 250, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMulRecFN__expWidth_9__sigWidth_23::_eval_initial_loop(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/x/shiran/VectorCGRA/fu/pymtl3_hardfloat/HardFloat/source/mulRecFN.v", 250, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMulRecFN__expWidth_9__sigWidth_23::_settle__TOP__1(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_settle__TOP__1\n"); );
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*1055:0*/ __Vtemp2[33];
    WData/*1055:0*/ __Vtemp3[33];
    // Body
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[1U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[2U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[3U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[4U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[5U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[6U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[7U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[8U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[9U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xaU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xbU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xcU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xdU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xeU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0xfU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x10U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x11U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x12U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x13U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x14U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x15U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x16U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x17U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x18U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x19U] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x1aU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x1bU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x1cU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x1dU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x1eU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x1fU] = 0U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[0x20U] = 1U;
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x16U)) 
                         >> 7U))) | (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x16U)) 
                                                  >> 7U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x16U)) 
                         >> 8U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x16U)) 
                         >> 8U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut 
        = (1U & ((IData)((vlTOPp->a >> 0x20U)) ^ (IData)(
                                                         (vlTOPp->b 
                                                          >> 0x20U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd 
        = (VL_ULL(0x3fffffffffff) & ((QData)((IData)(
                                                     (((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(
                                                                    (vlTOPp->a 
                                                                     >> 0x16U)) 
                                                            >> 7U))) 
                                                       << 0x16U) 
                                                      | (0x3fffffU 
                                                         & (IData)(vlTOPp->a))))) 
                                     * (QData)((IData)(
                                                       (((0U 
                                                          != 
                                                          (7U 
                                                           & ((IData)(
                                                                      (vlTOPp->b 
                                                                       >> 0x16U)) 
                                                              >> 7U))) 
                                                         << 0x16U) 
                                                        | (0x3fffffU 
                                                           & (IData)(vlTOPp->b)))))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x7ffU & ((VL_EXTENDS_II(11,11, (0x3ffU 
                                            & (IData)(
                                                      (vlTOPp->a 
                                                       >> 0x16U)))) 
                      + VL_EXTENDS_II(11,11, (0x3ffU 
                                              & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x16U))))) 
                     - (IData)(0x200U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (IData)((vlTOPp->a >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->a >> 0x15U)))) | 
            ((7U == (7U & (IData)((vlTOPp->b >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->b >> 0x15U))))) 
           | (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA) 
               & (0U == (7U & ((IData)((vlTOPp->b >> 0x16U)) 
                               >> 7U)))) | ((0U == 
                                             (7U & 
                                              ((IData)(
                                                       (vlTOPp->a 
                                                        >> 0x16U)) 
                                               >> 7U))) 
                                            & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
        = ((0x3fffffeU & ((IData)((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd 
                                   >> 0x15U)) << 1U)) 
           | (0U != (0x1fffffU & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd))));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    __Vtemp2[3U] = 0U;
    __Vtemp2[4U] = 0U;
    __Vtemp2[5U] = 0U;
    __Vtemp2[6U] = 0U;
    __Vtemp2[7U] = 0U;
    __Vtemp2[8U] = 0U;
    __Vtemp2[9U] = 0U;
    __Vtemp2[0xaU] = 0U;
    __Vtemp2[0xbU] = 0U;
    __Vtemp2[0xcU] = 0U;
    __Vtemp2[0xdU] = 0U;
    __Vtemp2[0xeU] = 0U;
    __Vtemp2[0xfU] = 0U;
    __Vtemp2[0x10U] = 0U;
    __Vtemp2[0x11U] = 0U;
    __Vtemp2[0x12U] = 0U;
    __Vtemp2[0x13U] = 0U;
    __Vtemp2[0x14U] = 0U;
    __Vtemp2[0x15U] = 0U;
    __Vtemp2[0x16U] = 0U;
    __Vtemp2[0x17U] = 0U;
    __Vtemp2[0x18U] = 0U;
    __Vtemp2[0x19U] = 0U;
    __Vtemp2[0x1aU] = 0U;
    __Vtemp2[0x1bU] = 0U;
    __Vtemp2[0x1cU] = 0U;
    __Vtemp2[0x1dU] = 0U;
    __Vtemp2[0x1eU] = 0U;
    __Vtemp2[0x1fU] = 0U;
    __Vtemp2[0x20U] = 1U;
    VL_SHIFTRS_WWI(1025,1025,10, __Vtemp3, __Vtemp2, 
                   (0x3ffU & (~ VL_EXTENDS_II(10,11, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut)))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xffffffU & ((__Vtemp3[8U] << 0x15U) | (
                                                   __Vtemp3[7U] 
                                                   >> 0xbU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & ((IData)((vlTOPp->a >> 0x16U)) 
                             >> 8U))) & (IData)((vlTOPp->a 
                                                 >> 0x1dU))) 
              | ((3U == (3U & ((IData)((vlTOPp->b >> 0x16U)) 
                               >> 8U))) & (IData)((vlTOPp->b 
                                                   >> 0x1dU)))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffffeU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x17U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffffdU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x15U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffffbU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x13U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffff7U & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x11U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffefU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xfU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffdfU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xdU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffbfU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xbU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffff7fU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 9U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffeffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 7U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffdffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 5U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffbffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 3U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfff7ffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 1U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffefffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 1U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdfffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 3U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbfffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 5U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7fffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 7U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfeffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 9U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xbU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xdU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7ffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xfU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xefffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x11U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdfffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x13U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbfffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x15U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7fffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x17U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                  >> 0x17U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7fffffU & ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                 >> 3U) & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | (0U != (7U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                           & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 1U)))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7fffffU & ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                 & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                      & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                              | vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                               & (~ vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                         & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3fffffU & ((0x2000000U & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                         ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xfffU & (VL_EXTENDS_II(12,11, (0x7ffU & 
                                           VL_EXTENDS_II(11,11, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                     + (0x1ffffffU & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x17U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0xecU, VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0xecU, VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,11, 
                                                                        (0x7ffU 
                                                                         & VL_EXTENDS_II(11,11, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 9U))) 
               & ((0x2000000U & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                   ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000000U 
                                                       & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                                                       ? 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x2000000U 
                                                     & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                                                     ? 
                                                    (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U)
                                                     : 
                                                    (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x17U))) 
                                                & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x2000000U 
                                                       & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                                                       ? 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                          >> 0x19U) 
                                                         & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)))))))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 8U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0xecU, 
                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0U : (1U & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut))))) 
                    << 0x20U) | (QData)((IData)(((0xffc00000U 
                                                  & ((((((((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                                  | VL_GTS_III(1,32,32, 0xecU, 
                                                                               VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x380U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff13U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x100U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x80U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0xecU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x2ffU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x300U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x380U
                                                          : 0U)) 
                                                     << 0x16U)) 
                                                 | (0x3fffffU 
                                                    & (((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                           ? 0x200000U
                                                           : 0U) 
                                                         | (((~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                             & VL_LTES_III(1,32,32, 0xecU, 
                                                                           VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                             ? 
                                                            (0x200000U 
                                                             & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                             : 0U)) 
                                                        | ((((~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                             & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))) 
                                                            & VL_LTES_III(1,32,32, 0xecU, 
                                                                          VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                            ? 
                                                           (0xffdfffffU 
                                                            & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | (- (IData)((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

VL_INLINE_OPT void VMulRecFN__expWidth_9__sigWidth_23::_combo__TOP__2(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_combo__TOP__2\n"); );
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*1055:0*/ __Vtemp6[33];
    // Body
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut 
        = ((0U == (7U & ((IData)((vlTOPp->a >> 0x16U)) 
                         >> 7U))) | (0U == (7U & ((IData)(
                                                          (vlTOPp->b 
                                                           >> 0x16U)) 
                                                  >> 7U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->a >> 0x16U)) 
                         >> 8U))) & (~ (IData)((vlTOPp->a 
                                                >> 0x1dU))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB 
        = ((3U == (3U & ((IData)((vlTOPp->b >> 0x16U)) 
                         >> 8U))) & (~ (IData)((vlTOPp->b 
                                                >> 0x1dU))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut 
        = (1U & ((IData)((vlTOPp->a >> 0x20U)) ^ (IData)(
                                                         (vlTOPp->b 
                                                          >> 0x20U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd 
        = (VL_ULL(0x3fffffffffff) & ((QData)((IData)(
                                                     (((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(
                                                                    (vlTOPp->a 
                                                                     >> 0x16U)) 
                                                            >> 7U))) 
                                                       << 0x16U) 
                                                      | (0x3fffffU 
                                                         & (IData)(vlTOPp->a))))) 
                                     * (QData)((IData)(
                                                       (((0U 
                                                          != 
                                                          (7U 
                                                           & ((IData)(
                                                                      (vlTOPp->b 
                                                                       >> 0x16U)) 
                                                              >> 7U))) 
                                                         << 0x16U) 
                                                        | (0x3fffffU 
                                                           & (IData)(vlTOPp->b)))))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut 
        = (0x7ffU & ((VL_EXTENDS_II(11,11, (0x3ffU 
                                            & (IData)(
                                                      (vlTOPp->a 
                                                       >> 0x16U)))) 
                      + VL_EXTENDS_II(11,11, (0x3ffU 
                                              & (IData)(
                                                        (vlTOPp->b 
                                                         >> 0x16U))))) 
                     - (IData)(0x200U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA) 
           | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc 
        = ((((7U == (7U & (IData)((vlTOPp->a >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->a >> 0x15U)))) | 
            ((7U == (7U & (IData)((vlTOPp->b >> 0x1dU)))) 
             & (~ (IData)((vlTOPp->b >> 0x15U))))) 
           | (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA) 
               & (0U == (7U & ((IData)((vlTOPp->b >> 0x16U)) 
                               >> 7U)))) | ((0U == 
                                             (7U & 
                                              ((IData)(
                                                       (vlTOPp->a 
                                                        >> 0x16U)) 
                                               >> 7U))) 
                                            & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut)) 
           | ((3U == (IData)(vlTOPp->roundingMode)) 
              & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
        = ((0x3fffffeU & ((IData)((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd 
                                   >> 0x15U)) << 1U)) 
           | (0U != (0x1fffffU & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd))));
    VL_SHIFTRS_WWI(1025,1025,10, __Vtemp6, vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x3ffU & (~ VL_EXTENDS_II(10,11, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut)))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0xffffffU & ((__Vtemp6[8U] << 0x15U) | (
                                                   __Vtemp6[7U] 
                                                   >> 0xbU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc) 
           | (((3U == (3U & ((IData)((vlTOPp->a >> 0x16U)) 
                             >> 8U))) & (IData)((vlTOPp->a 
                                                 >> 0x1dU))) 
              | ((3U == (3U & ((IData)((vlTOPp->b >> 0x16U)) 
                               >> 8U))) & (IData)((vlTOPp->b 
                                                   >> 0x1dU)))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffffeU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x17U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffffdU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x15U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffffbU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x13U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffff7U & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x11U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffefU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xfU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffdfU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xdU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffbfU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xbU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffff7fU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 9U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffeffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 7U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffdffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 5U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfffbffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 3U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfff7ffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 1U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffefffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 1U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffdfffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 3U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffbfffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 5U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xff7fffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 7U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfeffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 9U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfdffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xbU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xfbffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xdU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xf7ffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xfU)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xefffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x11U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xdfffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x13U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xbfffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x15U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x7fffffU & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x17U)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut))) 
                 & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                  >> 0x17U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0x7fffffU & ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                 >> 3U) & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | (0U != (7U & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                           & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 1U)))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0x7fffffU & ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                 & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                      & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x1ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                              | vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : (((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                               & (~ vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                              >> 2U) | (((6U == (IData)(vlTOPp->roundingMode)) 
                                         & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))
                                         ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
                                            >> 1U) : 0U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x3fffffU & ((0x2000000U & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                         ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0xfffU & (VL_EXTENDS_II(12,11, (0x7ffU & 
                                           VL_EXTENDS_II(11,11, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut)))) 
                     + (0x1ffffffU & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x17U))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,32,32, 0xecU, VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))) 
           & ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow 
        = (VL_GTS_III(1,32,32, 0xecU, VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
           | ((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                & VL_GTES_III(1,32,32, 0U, VL_SHIFTRS_III(32,32,32, 
                                                          VL_EXTENDS_II(32,11, 
                                                                        (0x7ffU 
                                                                         & VL_EXTENDS_II(11,11, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut)))), 9U))) 
               & ((0x2000000U & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                   ? (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                      >> 3U) : (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                >> 2U))) & (~ (((((0U 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlTOPp->control))) 
                                                  & (~ 
                                                     ((0x2000000U 
                                                       & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                                                       ? 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 4U)
                                                       : 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)))) 
                                                 & ((0x2000000U 
                                                     & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                                                     ? 
                                                    (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x18U)
                                                     : 
                                                    (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                     >> 0x17U))) 
                                                & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)) 
                                               & ((((0U 
                                                     == (IData)(vlTOPp->roundingMode)) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->roundingMode))) 
                                                   & ((0x2000000U 
                                                       & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)
                                                       ? 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                       >> 2U)
                                                       : 
                                                      (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                       >> 1U))) 
                                                  | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                     & (((vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                          >> 0x19U) 
                                                         & (vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut 
                                                            >> 2U)) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut)))))))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 8U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc) 
                               << 4U) | (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                            & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                              & (VL_GTS_III(1,32,32, 0xecU, 
                                                            VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                 | (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut) 
           | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                      ? 0U : (1U & (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut))))) 
                    << 0x20U) | (QData)((IData)(((0xffc00000U 
                                                  & ((((((((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut) 
                                                                  | VL_GTS_III(1,32,32, 0xecU, 
                                                                               VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                                  ? 0x380U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff13U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                ? 0x100U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                               ? 0x80U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                             ? 0xecU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                            ? 0x2ffU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                           ? 0x300U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x380U
                                                          : 0U)) 
                                                     << 0x16U)) 
                                                 | (0x3fffffU 
                                                    & (((((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                           ? 0x200000U
                                                           : 0U) 
                                                         | (((~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut)) 
                                                             & VL_LTES_III(1,32,32, 0xecU, 
                                                                           VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                             ? 
                                                            (0x200000U 
                                                             & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                             : 0U)) 
                                                        | ((((~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                             & (~ (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut))) 
                                                            & VL_LTES_III(1,32,32, 0xecU, 
                                                                          VL_EXTENDS_II(32,12, (IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                            ? 
                                                           (0xffdfffffU 
                                                            & vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                            : 0U)) 
                                                       | (- (IData)((IData)(vlTOPp->MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)))))))));
}

void VMulRecFN__expWidth_9__sigWidth_23::_eval(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_eval\n"); );
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VMulRecFN__expWidth_9__sigWidth_23::_eval_initial(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_eval_initial\n"); );
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMulRecFN__expWidth_9__sigWidth_23::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::final\n"); );
    // Variables
    VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMulRecFN__expWidth_9__sigWidth_23::_eval_settle(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_eval_settle\n"); );
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VMulRecFN__expWidth_9__sigWidth_23::_change_request(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_change_request\n"); );
    VMulRecFN__expWidth_9__sigWidth_23* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMulRecFN__expWidth_9__sigWidth_23::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((a & VL_ULL(0)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & VL_ULL(0)))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG

void VMulRecFN__expWidth_9__sigWidth_23::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMulRecFN__expWidth_9__sigWidth_23::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_Q(33);
    b = VL_RAND_RESET_Q(33);
    control = VL_RAND_RESET_I(1);
    exceptionFlags = VL_RAND_RESET_I(5);
    out = VL_RAND_RESET_Q(33);
    roundingMode = VL_RAND_RESET_I(3);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut = VL_RAND_RESET_I(11);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd = VL_RAND_RESET_Q(46);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut = VL_RAND_RESET_I(26);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut = VL_RAND_RESET_I(22);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask = VL_RAND_RESET_I(26);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main = VL_RAND_RESET_I(24);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask = VL_RAND_RESET_I(26);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound = VL_RAND_RESET_I(1);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig = VL_RAND_RESET_I(25);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(1025, MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c);
    MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut = VL_RAND_RESET_I(24);
}
