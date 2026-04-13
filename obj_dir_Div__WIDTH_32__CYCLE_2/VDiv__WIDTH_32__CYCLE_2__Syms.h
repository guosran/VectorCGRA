// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VDIV__WIDTH_32__CYCLE_2__SYMS_H_
#define _VDIV__WIDTH_32__CYCLE_2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VDiv__WIDTH_32__CYCLE_2.h"

// SYMS CLASS
class VDiv__WIDTH_32__CYCLE_2__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VDiv__WIDTH_32__CYCLE_2*       TOPp;
    
    // CREATORS
    VDiv__WIDTH_32__CYCLE_2__Syms(VDiv__WIDTH_32__CYCLE_2* topp, const char* namep);
    ~VDiv__WIDTH_32__CYCLE_2__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
