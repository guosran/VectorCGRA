// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_STD_H_
#define VERILATED_VCGRA_TEST_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_std(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_std();
    VL_UNCOPYABLE(Vcgra_test_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
