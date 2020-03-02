#include"mysort.h"

int main(){
    int array_test[]={32, 12, 56, 88, 48, 99, 28, 40, 56, 8};
    int length = 10;
    // InsertSort(array_test, length);
    // BubbleSort(array_test, length);
    // SelectSort(array_test, length);
    // ShellSort(array_test, length);
    QuickSort(array_test, length);
    for (int i = 0; i < length; i++)
    {
        printf("%d ",array_test[i]);
    }
    printf("\n");
    
    return 0;
}