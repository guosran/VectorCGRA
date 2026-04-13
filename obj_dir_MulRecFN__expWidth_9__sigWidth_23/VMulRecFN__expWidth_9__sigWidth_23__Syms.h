// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMULRECFN__EXPWIDTH_9__SIGWIDTH_23__SYMS_H_
#define _VMULRECFN__EXPWIDTH_9__SIGWIDTH_23__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMulRecFN__expWidth_9__sigWidth_23.h"

// SYMS CLASS
class VMulRecFN__expWidth_9__sigWidth_23__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VMulRecFN__expWidth_9__sigWidth_23* TOPp;
    
    // CREATORS
    VMulRecFN__expWidth_9__sigWidth_23__Syms(VMulRecFN__expWidth_9__sigWidth_23* topp, const char* namep);
    ~VMulRecFN__expWidth_9__sigWidth_23__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
