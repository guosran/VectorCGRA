from cgra.test.CgraRTL_spmv_test_from_yaml import *
try:
    print("Testing generator")
    sim_spmv_return({}, True)
except Exception as e:
    import traceback
    traceback.print_exc()
