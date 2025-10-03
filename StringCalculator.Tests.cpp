#include <gtest/gtest.h>
#include "StringCalculator.h"
TEST(StringCalculatorTest, EmptyStringReturnsZero) {
    EXPECT_EQ(add(""), 0);
}
