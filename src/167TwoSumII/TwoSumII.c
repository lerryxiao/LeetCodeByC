//
// Created by 肖乐源 on 11/03/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include "TwoSumII.h"

int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *result = (int *) malloc(sizeof(int) * (*returnSize));
    if (numbersSize == 2)
    {
        result[0] = 1;
        result[1] = 2;
        return result;
    }

    int middleIndex = numbersSize / 2;
    while (numbers[middleIndex] > (target / 2 + 1))
    {
        middleIndex = middleIndex / 2;
    }
    if (middleIndex == 0)
    {
        middleIndex = 1;
    }
    for (int i = 0; i <= middleIndex; i++)
    {
        for (int j = middleIndex; j < numbersSize; j++)
        {
            if(numbers[i] > target){
                break;
            }
            if (numbers[i] + numbers[j] == target)
            {
                result[0] = i + 1;
                result[1] = j + 1;
                return result;
            }
        }
    }
    return result;
}