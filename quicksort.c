#include "mysort.h"

void QuickSort_recursion(int *array, int start, int end)
{
    if (start < end)
    {
        int target = array[start];
        int i, j;
        i = start;
        j = end;
        while (i < j)
        {
            while (i < j && array[j]>target)
            {
                j--;
            }
            if (i < j)
            {
                array[i] = array[j];
                i++;
            }
            
            while (i < j && array[i]<target)
            {
                i++;
            }
            if (i < j)
            {
                array[j] = array[i];
                j--;
            }
            
        }
        array[i] = target;
        QuickSort_recursion(array, start, i - 1);
        QuickSort_recursion(array, i + 1, end);
    }
    
}

void QuickSort(int *array, int length)
{
    QuickSort_recursion(array, 0, length-1);
}