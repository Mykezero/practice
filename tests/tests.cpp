#include <CppUTest/TestHarness.h>
#include "sample.h"

TEST_GROUP(Sample)
{
};

TEST(Sample, FirstTest)
{
    int result = test();
    CHECK_EQUAL(1, result);
}