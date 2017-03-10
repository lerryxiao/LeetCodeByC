//
// Created by 肖乐源 on 10/03/2017.
//

#include "gtest/gtest.h"
#include "pascalsTriangle2.h"

TEST(TestPascalTriangle2Suit, TestCase2)
{
    int size = 0;
    int *result = getRow(2, &size);
    int data[] = {1, 2, 1};
    ASSERT_EQ(size, 3);
    for(int i =0; i < size; i++)
    {
        ASSERT_EQ(result[i], data[i]);
    }
    delete [] result;
}

TEST(TestPascalTriangle2Suit, TestCase3)
{
    int size = 0;
    int index = 3;
    int *result = getRow(index, &size);
    int data[] = {1, 3, 3, 1};
    ASSERT_EQ(size, 4);
    for(int i =0; i < size; i++)
    {
        ASSERT_EQ(result[i], data[i]);
    }
    delete [] result;
}