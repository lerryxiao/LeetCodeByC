//
// Created by 肖乐源 on 09/03/2017.
//
#include <iostream>
#include "gtest/gtest.h"
#include "pascalsTriangle.h"

using namespace std;

TEST(TestPascalsTriangleSuit, TestCase1) {
    int count = 1;
    int *columnSize[count];
    int **result = generate(count, columnSize);
    int data[1][1] = {1};
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < (*columnSize)[i]; ++j) {
            ASSERT_EQ(result[i][j], data[i][j]);
        }
    }
    delete[] *columnSize;
    delete[] *result;
}

TEST(TestPascalsTriangleSuit, TestCase2) {
    int count = 2;
    int *columnSize[count];
    int **result = generate(count, columnSize);

    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < (*columnSize)[i]; ++j) {
            ASSERT_EQ(result[i][j], 1);
        }
    }
    delete[] *columnSize;
    delete[] *result;
}


TEST(TestPascalsTriangleSuit, TestCase5) {
    int count = 5;
    int *columnSize[count];
    int **result = generate(count, columnSize);
    int data[5][5] = {{1},
                              {1, 1},
                              {1, 2, 1},
                              {1, 3, 3, 1},
                              {1, 4, 6, 4, 1}};

    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < (*columnSize)[i]; ++j) {
            EXPECT_EQ(result[i][j], data[i][j]) << "index is " << i << "   " << j << ", value is "<< result[i][j];
        }
    }
    delete[] *columnSize;
    delete[] *result;
}
