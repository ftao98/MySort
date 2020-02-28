#include "mysort.h"
void SelectSort(int* array, int length)
{
    if (array == NULL || length < 0)
    {
        return;
    }
    int min, min_index;
    int i, j;
    int temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = array[i];
        min_index = i;
        for (int j = i + 1; j < length; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                min_index = j;
            }
        }
        array[min_index] = array[i];
        array[i] = min;
    }
}