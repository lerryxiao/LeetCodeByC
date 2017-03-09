#include <stdlib.h>
#include "gtest/gtest.h"
#include "searchInsertPosition.h"

int nums[] = {1,3,5,6};
TEST(TestSearchInsertPostionSuite, First)
{
    int index = searchInsertPostion(nums, 4, 5);
    ASSERT_EQ(index, 2);
}

TEST(TestSearchInsertPostionSuite, Second)
{
    int index = searchInsertPostion(nums, 4, 2);
    ASSERT_EQ(index, 1);
}

TEST(TestSearchInsertPostionSuite, Third)
{
    int index = searchInsertPostion(nums, 4, 7);
    ASSERT_EQ(index, 4);
}

TEST(TestSearchInsertPostionSuite, Fourth)
{
    int index = searchInsertPostion(nums, 4, 0);
    ASSERT_EQ(index, 0);
}


