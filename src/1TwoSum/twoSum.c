//
// Created by 肖乐源 on 10/03/2017.
//
#include <stdio.h>
#include <stdlib.h>
#include "twoSum.h"

int *twoSum(int *nums, int numsSize, int target)
{
    int *result = (int *) malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
            }
        }

    }
    return result;
}
