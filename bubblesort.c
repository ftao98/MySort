#include "mysort.h"
void BubbleSort(int *array, int length){
    // printf("Bubble Sort\n");
    if (array == NULL)
    {
        return;
    }
    
    int temp;
    for (int i = length - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}