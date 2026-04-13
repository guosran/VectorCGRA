// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VCGRA_TEST_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcgra_test_std__03a__03aprocess;


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_std__03a__03aprocess__Vclpkg(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vcgra_test_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vcgra_test__Syms* __restrict vlSymsp, VlClassRef<Vcgra_test_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vcgra_test__Syms;

class Vcgra_test_std__03a__03aprocess : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vcgra_test__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vcgra_test__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vcgra_test__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vcgra_test__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vcgra_test__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vcgra_test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcgra_test__Syms* __restrict vlSymsp);
  public:
    Vcgra_test_std__03a__03aprocess(Vcgra_test__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vcgra_test_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<Vcgra_test_std__03a__03aprocess>& obj);

#endif  // guard
