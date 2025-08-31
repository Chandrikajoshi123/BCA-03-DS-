#include<stdio.h>
int main()
{
   int  array1[5]={1,2,3,4,5}; // declaration and initialization of array
   printf("The Array is : ");
for(int i=0 ; i<5; i++)

{

    printf("%d ", array1[i]);//Printing  the Array.

}
printf("\n");
printf("The 2nd  Index Value is : %d",array1[2]);

array1[2]=50;//Updating the Value of 2nd Index.
printf("\n The Updated Array is : ");
for(int i=0; i<5; i++)
{
    printf("%d ", array1[i]);//Printing the Updated Array.
}

    return 0;
}