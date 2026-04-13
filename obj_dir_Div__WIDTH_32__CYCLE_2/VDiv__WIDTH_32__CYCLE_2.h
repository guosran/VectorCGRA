// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDIV__WIDTH_32__CYCLE_2_H_
#define _VDIV__WIDTH_32__CYCLE_2_H_  // guard

#include "verilated.h"

//==========

class VDiv__WIDTH_32__CYCLE_2__Syms;

//----------

VL_MODULE(VDiv__WIDTH_32__CYCLE_2) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN(dividend,31,0);
    VL_IN(divisor,31,0);
    VL_OUT(quotient,31,0);
    VL_OUT(remainder,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__q;
    IData/*31:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__q;
    QData/*32:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__0__KET____DOT__u0__DOT__r;
    QData/*32:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__genblk2__BRA__1__KET____DOT__u0__DOT__r;
    IData/*31:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_i[2];
    QData/*32:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_i[2];
    IData/*31:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__q_o[2];
    QData/*32:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__r_o[2];
    IData/*31:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__dividend_reg[2];
    IData/*31:0*/ Div___05FWIDTH_32___05FCYCLE_2__DOT__v__DOT__divisor_reg[2];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDiv__WIDTH_32__CYCLE_2__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDiv__WIDTH_32__CYCLE_2);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDiv__WIDTH_32__CYCLE_2(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDiv__WIDTH_32__CYCLE_2();
    
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
    static void _eval_initial_loop(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDiv__WIDTH_32__CYCLE_2__Syms* symsp, bool first);
  private:
    static QData _change_request(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VDiv__WIDTH_32__CYCLE_2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
