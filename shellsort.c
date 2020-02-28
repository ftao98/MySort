#include "mysort.h"

void ShellSort(int* array, int length)
{
    if (array == NULL || length < 0)
    {
        return;
    }
    int step_array[] = {9, 5, 1};
    int step_len = 3;
    int i, j, k, m;
    int step, group;
    int target;
    for (i = 0; i < step_len; i++)
    {
        step = step_array[i];
        // group = length / step;
        for (j = 0; j < step; j++)
        {
            for (k = j + step; k < length; k+=step)
            {
                target = array[k];
                for (m = k; m > 0; m-=step)
                {
                    if (array[m-step] > target)
                    {
                        array[m] = array[m-step];
                    }else
                    {
                        break;
                    }
                }
                array[m] = target;
            }
            
        }
        
    }
    
}