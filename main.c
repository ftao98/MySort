#include"mysort.h"

int main(){
    int array_test[]={32, 12, 56, 88, 48, 99, 28, 40};
    int length = 8;
    BubbleSort(array_test, length);
    for (int i = 0; i < length; i++)
    {
        printf("%d ",array_test[i]);
    }
    printf("\n");
    
    return 0;
}