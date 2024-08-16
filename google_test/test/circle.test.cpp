#include <gtest/gtest.h>
#include <circle.h>

TEST(CircleTest, FunctionTest)
{
    EXPECT_NEAR(28.274, circle(3), 0.001) << "Circle Area calculate function fail";
    EXPECT_NEAR(50.265, circle(4), 0.001) << "Circle Area calculate function fail";
    EXPECT_NEAR(78.540, circle(5), 0.001) << "Circle Area calculate function fail";
}
