#include<stdio.h>
int main()
{
    int array1[5]={1,2,3,4,5};
    printf("Original Array is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\nReversed Array is: ");
    for(int i=4;i>=0;i--)
    {
        printf("%d ",array1[i]);
    }

    return 0;
}