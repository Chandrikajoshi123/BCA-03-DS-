#include<stdio.h>
int main()
{
    int array1[5];// Array Decleration
    printf("Enter 5 Elements for the Array:");//Array Filling
    for(int i=0; i<5; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\n The Given Array is: ");//Array Printing
   for(int i=0; i<5; i++) {
        printf("%d ", array1[i]);
    }

    return 0;
}