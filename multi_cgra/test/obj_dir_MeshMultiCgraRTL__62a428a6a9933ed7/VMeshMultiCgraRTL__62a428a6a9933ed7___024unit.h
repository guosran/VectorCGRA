// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMeshMultiCgraRTL__62a428a6a9933ed7.h for the primary calling header

#ifndef _VMESHMULTICGRARTL__62A428A6A9933ED7___024UNIT_H_
#define _VMESHMULTICGRARTL__62A428A6A9933ED7___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VMeshMultiCgraRTL__62a428a6a9933ed7__Syms;

//----------

VL_MODULE(VMeshMultiCgraRTL__62a428a6a9933ed7___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VMeshMultiCgraRTL__62a428a6a9933ed7__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMeshMultiCgraRTL__62a428a6a9933ed7___024unit);  ///< Copying not allowed
  public:
    VMeshMultiCgraRTL__62a428a6a9933ed7___024unit(const char* name = "TOP");
    ~VMeshMultiCgraRTL__62a428a6a9933ed7___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VMeshMultiCgraRTL__62a428a6a9933ed7__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
