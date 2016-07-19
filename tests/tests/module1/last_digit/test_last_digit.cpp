#include <gtest/gtest.h>
#include "module1/last_digit/last_digit.h"


TEST(TestLastDigit, LastDigit) {
    EXPECT_EQ(0, lastDigit(20));
    EXPECT_EQ(1, lastDigit(21));
}
