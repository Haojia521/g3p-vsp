#ifndef G3P_TEST_MATH
#define G3P_TEST_MATH

#define DO_TEST_MATH_TRANS_SEQ_2 1

#if DO_TEST_MATH_TRANS_SEQ_2
#include "g3p_test_math_trans_seq_2.h"
#else
namespace g3test
{
    void doTestFunctions()
    {
        std::cout << "No functions for testing..." << std::endl;
    }
}
#endif

#endif
