#include <gtest/gtest.h>
#include <factorial.h>

TEST(FactorialTest, FunctionTest)
{
    EXPECT_EQ(-1, factorial(-5));
    EXPECT_EQ(1, factorial(0));
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(479001600, factorial(12));
}