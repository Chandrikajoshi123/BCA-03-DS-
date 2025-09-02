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
    
long long int multi=1;
for(int i=0; i<5; i++)
{
    multi*=array1[i];
}
printf("\n The Multiplication of the Array is: %d", multi);//Multiplication of the Array

    return 0;
}