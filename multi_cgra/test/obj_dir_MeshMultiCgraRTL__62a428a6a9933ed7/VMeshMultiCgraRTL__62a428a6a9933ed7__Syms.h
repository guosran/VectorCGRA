// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMESHMULTICGRARTL__62A428A6A9933ED7__SYMS_H_
#define _VMESHMULTICGRARTL__62A428A6A9933ED7__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMeshMultiCgraRTL__62a428a6a9933ed7.h"
#include "VMeshMultiCgraRTL__62a428a6a9933ed7___024unit.h"

// SYMS CLASS
class VMeshMultiCgraRTL__62a428a6a9933ed7__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VMeshMultiCgraRTL__62a428a6a9933ed7* TOPp;
    
    // CREATORS
    VMeshMultiCgraRTL__62a428a6a9933ed7__Syms(VMeshMultiCgraRTL__62a428a6a9933ed7* topp, const char* namep);
    ~VMeshMultiCgraRTL__62a428a6a9933ed7__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
