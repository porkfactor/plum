#include <point.hpp>
#include <gtest/gtest.h>

TEST(PointTest, CopyConstructor)
{
    point<double> p1(1, 2, 3);
    point<double> p2(p1);

    EXPECT_EQ(p2.x(), p1.x());
    EXPECT_EQ(p2.y(), p1.y());
    EXPECT_EQ(p2.z(), p1.z());
}

TEST(PointTest, DefaultConstructor)
{
    point<double> p1;

    EXPECT_EQ(p1.x(), 0);
    EXPECT_EQ(p1.y(), 0);
    EXPECT_EQ(p1.z(), 0);
}

TEST(PointTest, ValueConstructor)
{
    point<double> p1(1, 2, 3);

    EXPECT_EQ(p1.x(), 1);
    EXPECT_EQ(p1.y(), 2);
    EXPECT_EQ(p1.z(), 3);
}

TEST(PointTest, OperatorEq)
{
    point<double> p1(1, 2, 3);

    EXPECT_TRUE(p1 == point<double>(1, 2, 3));
    EXPECT_FALSE(p1 == point<double>(0, 2, 3));
    EXPECT_FALSE(p1 == point<double>(1, 0, 3));
    EXPECT_FALSE(p1 == point<double>(1, 2, 0));
}

TEST(PointTest, OperatorNeq)
{
     point<double> p1(1, 2, 3);

     EXPECT_TRUE(p1 != point<double>(3, 2, 1));
     EXPECT_FALSE(p1 != point<double>(1, 2, 3));
}
