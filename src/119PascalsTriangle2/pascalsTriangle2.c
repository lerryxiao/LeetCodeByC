//
// Created by 肖乐源 on 10/03/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "pascalsTriangle2.h"

int* getRow(int rowIndex, int* returnSize)
{
    int *result = (int*)malloc(sizeof(int) * (rowIndex + 1));
    memset(result,0, sizeof(int) * (rowIndex+1));
    *returnSize = rowIndex + 1;
    result[0] = result[rowIndex] = 1;
    for(int i = 0; i < rowIndex; ++i)
    {
        for(int j = 1; j < rowIndex; ++j)
        {
            result[j] += result[j+1];
        }
    }
    return  result;
}
