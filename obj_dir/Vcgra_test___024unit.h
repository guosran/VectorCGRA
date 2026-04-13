// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST___024UNIT_H_
#define VERILATED_VCGRA_TEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test___024unit(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test___024unit();
    VL_UNCOPYABLE(Vcgra_test___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
