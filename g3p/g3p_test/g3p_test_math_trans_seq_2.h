#ifndef G3P_TEST_MATH_TRANS_SEQ_2
#define G3P_TEST_MATH_TRANS_SEQ_2

#include <math/transformSequence2.h>

#include "g3p_test_utils.h"

using namespace g3;

namespace g3test
{
    void testTransformSequence2_functions()
    {
        Vector2d v2d1(1, 2);
        Vector2f v2f1(3, 4);

        TransformSequence2d ts2d;
        ts2d.translation(v2d1).translation(v2f1);

        Vector2d v2d2(5, 5);
        auto transResult = ts2d.transformP(v2d2);
        printVector2(transResult, "trans result");

        Vector2f v2f2(1.3f, 3.2f);
        TransformSequence2f ts2f;
        ts2f.translation(v2f1).translation(v2f2).translation(v2d1);
        auto transResult2 = ts2f.transformP(v2d2);
        printVector2(transResult2, "trans result 2");

        auto ts2fPtr = std::make_shared<TransformSequence2f>();
        ts2fPtr->translation(v2f1).translation(v2f2);
        auto transResult4 = ts2fPtr->transformP(v2d2);
        printVector2(transResult4, "trans result 4");

        auto ts2fPtr2 = std::make_shared<TransformSequence2f>();
        ts2fPtr2->translation(v2f1).append(ts2fPtr);
        auto transReault5 = ts2fPtr2->transformP(v2f2);
        printVector2(transReault5, "trans result 5");
    }

    void doTestFunctions()
    {
        testTransformSequence2_functions();
    }
}

#endif
