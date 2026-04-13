// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VCGRA_TEST_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_std__03a__03asemaphore__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_std__03a__03asemaphore__Vclpkg(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(Vcgra_test_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcgra_test__Syms;

class Vcgra_test_std__03a__03asemaphore : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcgra_test__Syms* __restrict vlSymsp);
  public:
    Vcgra_test_std__03a__03asemaphore(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vcgra_test_std__03a__03asemaphore();
};

std::string VL_TO_STRING(const VlClassRef<Vcgra_test_std__03a__03asemaphore>& obj);

#endif  // guard
