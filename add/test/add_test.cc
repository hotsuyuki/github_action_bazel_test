#include "add/add.h"

#include <gtest/gtest.h>

TEST(AddTest, SmokeTest) {
  const int x0 = 2;
  const int x1 = 3;
  const int y = add(x0, x1);
  EXPECT_EQ(y, x0 + x1);
}
