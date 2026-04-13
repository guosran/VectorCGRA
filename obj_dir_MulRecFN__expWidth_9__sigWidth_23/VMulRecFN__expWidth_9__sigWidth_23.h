// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMULRECFN__EXPWIDTH_9__SIGWIDTH_23_H_
#define _VMULRECFN__EXPWIDTH_9__SIGWIDTH_23_H_  // guard

#include "verilated.h"

//==========

class VMulRecFN__expWidth_9__sigWidth_23__Syms;

//----------

VL_MODULE(VMulRecFN__expWidth_9__sigWidth_23) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(control,0,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_IN8(roundingMode,2,0);
    VL_IN64(a,32,0);
    VL_IN64(b,32,0);
    VL_OUT64(out,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__invalidExc;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isInfOut;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_isZeroOut;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__notNaN_signOut;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
    CData/*0:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
    SData/*10:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sExpOut;
    SData/*11:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
    IData/*25:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__common_sigOut;
    IData/*21:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
    IData/*25:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask;
    IData/*23:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main;
    IData/*25:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
    IData/*24:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
    WData/*1024:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[33];
    IData/*23:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut;
    QData/*45:0*/ MulRecFN___05FexpWidth_9___05FsigWidth_23__DOT__v__DOT__mulRecFNToRaw__DOT__sigProd;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMulRecFN__expWidth_9__sigWidth_23__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMulRecFN__expWidth_9__sigWidth_23);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VMulRecFN__expWidth_9__sigWidth_23(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMulRecFN__expWidth_9__sigWidth_23();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMulRecFN__expWidth_9__sigWidth_23__Syms* symsp, bool first);
  private:
    static QData _change_request(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VMulRecFN__expWidth_9__sigWidth_23__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
