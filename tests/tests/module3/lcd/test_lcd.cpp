#include <gtest/gtest.h>
#include "module3/lcd/lcd.h"


TEST(TestLcd, ReturnsCorrectResult) {
    EXPECT_EQ(3, lcd(15));
    EXPECT_EQ(13, lcd(13));
}
