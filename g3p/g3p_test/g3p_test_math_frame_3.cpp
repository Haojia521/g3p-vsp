#ifndef G3P_TEST_MATH_FRAME_3
#define G3P_TEST_MATH_FRAME_3

#include <math/frame3.h>

#include "g3p_test_utils.h"

using namespace g3;

namespace g3test
{
    void testFrame3_constructor()
    {
        Vector3d v3d1(1.5, 2.6, 3.7);

        Frame3d f3d1(v3d1);
        printFrame3(f3d1, "f3d1");
        

    }
}

#endif