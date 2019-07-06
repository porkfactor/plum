#include <gtest/gtest.h>
#include <vector.hpp>

TEST(VectorTest, DefaultConstructor)
{
    vector<double> v1;

    EXPECT_EQ(v1.x(), 0);
    EXPECT_EQ(v1.y(), 0);
    EXPECT_EQ(v1.z(), 0);
}

TEST(VectorTest, ValueConstructor)
{
    vector<double> v1(1, 2, 3);

    EXPECT_EQ(v1.x(), 1);
    EXPECT_EQ(v1.y(), 2);
    EXPECT_EQ(v1.z(), 3);
}

TEST(VectorTest, CopyConstructor)
{
    vector<double> v1(1, 2, 3);
    vector<double> v2(v1);

    EXPECT_EQ(v2.x(), 1);
    EXPECT_EQ(v2.y(), 2);
    EXPECT_EQ(v2.z(), 3);
}

TEST(VectorTest, OperatorPlus)
{
    vector<double> v1(1, 2, 3);
    vector<double> v2(4, 5, 6);
    vector<double> v3(v1 + v2);

    EXPECT_EQ(v3.x(), 5);
    EXPECT_EQ(v3.y(), 7);
    EXPECT_EQ(v3.z(), 9);
}

TEST(VectorTest, OperatorMinus)
{
    vector<double> v1(1, 2, 3);
    vector<double> v2(4, 5, 6);
    vector<double> v3(v2 - v1);

    EXPECT_EQ(v3.x(), 3);
    EXPECT_EQ(v3.y(), 3);
    EXPECT_EQ(v3.z(), 3);
}