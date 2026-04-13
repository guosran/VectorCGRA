// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VADDRECFN__EXPWIDTH_9__SIGWIDTH_23__SYMS_H_
#define _VADDRECFN__EXPWIDTH_9__SIGWIDTH_23__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAddRecFN__expWidth_9__sigWidth_23.h"

// SYMS CLASS
class VAddRecFN__expWidth_9__sigWidth_23__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VAddRecFN__expWidth_9__sigWidth_23* TOPp;
    
    // CREATORS
    VAddRecFN__expWidth_9__sigWidth_23__Syms(VAddRecFN__expWidth_9__sigWidth_23* topp, const char* namep);
    ~VAddRecFN__expWidth_9__sigWidth_23__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
