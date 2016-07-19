#include <gtest/gtest.h>
#include "module1/first_digit/first_digit.h"

TEST(TestFirstDigit, FirstDigit) {
    EXPECT_EQ(1, firstDigit(12));
}
