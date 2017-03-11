//
// Created by 肖乐源 on 10/03/2017.
//

#include "gtest/gtest.h"
#include "twoSum.h"

TEST(Test1TwoSumSuite, TestCase1)
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int data[] = {0,1};
    int *result = twoSum(nums, 4, target);
    for (int i = 0; i < 2; ++i)
    {
        ASSERT_EQ(result[i], data[i]);
    }
}

TEST(Test1TwoSumSuite, TestCase2)
{
    int nums[] = {3, 8, 9, 11, 1};
    int target = 10;
    int data[]= {2, 4};
    int *result = twoSum(nums, 5, target);
    for (int i = 0; i < 2; ++i)
    {
        ASSERT_EQ(result[i], data[i]);
    }
}