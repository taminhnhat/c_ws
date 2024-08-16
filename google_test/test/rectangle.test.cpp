#include <gtest/gtest.h>
#include <rectangle.h>

// Demonstrate some basic assertions.
TEST(HelloTest, TestBasicAssertions)
{
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(RectangleTest, InvalidParam)
{
  EXPECT_EQ(0, retangle(-1, 5));
  EXPECT_EQ(0, retangle(10, -2));
  EXPECT_EQ(0, retangle(0, 0));
}

TEST(RectangleTest, ValidParam)
{
  EXPECT_EQ(20, retangle(4, 5));
  EXPECT_EQ(10, retangle(5, 2));
  EXPECT_EQ(56, retangle(7, 8));
}