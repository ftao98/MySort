#include "mysort.h"
void InsertSort(int *array, int length)
{
    if (array == NULL || length < 0)
    {
        return;
    }
    printf("insertsort\ni\n");
    int target;
    int i, j;
    for (i = 1; i < length; i++)
    {
        target = array[i];
        for (j = i; j > 0; j--)
        {
            if (array[j-1] > target)
            {
                array[j] = array[j-1];
            }else
            {
                break;
            }  
        }
        array[j] = target;
    }
}