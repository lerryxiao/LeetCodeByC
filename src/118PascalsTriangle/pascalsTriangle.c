//
// Created by 肖乐源 on 09/03/2017.
//
#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int** columnSizes)
{
    if(numRows == 0) {
        return NULL;
    }
    int** result = (int**) malloc(sizeof(int*) * numRows);
    (*columnSizes) = (int*)malloc(sizeof(int) * numRows);
    (*columnSizes)[0] = 1;
    int* first = (int*)malloc(sizeof(int));
    first[0] = 1;
    result[0] = first;
    int* temp = result[0];
    for(int i = 1; i < numRows; ++i)
    {
        (*columnSizes)[i] = i + 1;
        result[i] = (int *)malloc(sizeof(int) * (i + 1));
        for(int j = 0; j <=  i/2; ++j)
        {
            if(j == 0)
            {
                result[i][j] = result[i][i-j] = 1;
            }
            else
            {
                result[i][j] = result[i][i-j] = temp[j] + temp[j-1];
            }
        }
        temp = result[i];
    }
    return result;
}