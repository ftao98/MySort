#include "mysort.h"

void creat_max_heap(int* array, int length)
{
    int i, j;
    int parent, max_son;
    int temp;
    for (i = (length - 2)/2; i >= 0; i--)
    {
        parent = i;
        max_son = 2 * parent + 1;
        while(max_son <= length - 1)
        {
            if (max_son + 1 <= length - 1 && array[max_son + 1] > array[max_son])
            {
                max_son++;
            }
            if (array[parent]>=array[max_son])
                break;
            temp = array[parent];
            array[parent] = array[max_son];
            array[max_son] = temp;
            parent = max_son;
            max_son = 2 * parent + 1;
        }

        
    }
    
}

void HeapSort(int* array, int length)
{
    int temp, temp1;
    creat_max_heap(array, length);

    int parent, max_son;
    for (int i = length - 1; i > 0; i--)
    {
        temp1 = array[0];
        array[0] = array[i];
        array[i] = temp1;

        parent = 0;
        max_son = 2 * parent + 1;
        while(max_son <= i - 1)
        {
            if (max_son + 1 <= i - 1 && array[max_son + 1] > array[max_son])
            {
                max_son++;
            }
            if (array[parent]>=array[max_son])
                break;
            temp = array[parent];
            array[parent] = array[max_son];
            array[max_son] = temp;
            parent = max_son;
            max_son = 2 * parent + 1;            
        }
    }
    
}