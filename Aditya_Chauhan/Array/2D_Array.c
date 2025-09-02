#include<stdio.h>
int main()
{
    int array1[2][3]={{1,2,3},{4,5,6}};
    printf("Original 2D Array is: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
    printf("Reversed 2D Array is: \n");
    for(int i=1;i>=0;i--)
    {
        for(int j=2;j>=0;j--)
        {
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
    //Accesing a particular element in the 2D array(Matrix)
    printf("Element at 1st row and 2nd column is, Matrix(1,2): %d",array1[0][1]);
    return 0;
}