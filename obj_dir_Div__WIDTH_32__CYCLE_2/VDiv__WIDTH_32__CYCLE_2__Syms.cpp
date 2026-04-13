// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VDiv__WIDTH_32__CYCLE_2__Syms.h"
#include "VDiv__WIDTH_32__CYCLE_2.h"



// FUNCTIONS
VDiv__WIDTH_32__CYCLE_2__Syms::VDiv__WIDTH_32__CYCLE_2__Syms(VDiv__WIDTH_32__CYCLE_2* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
