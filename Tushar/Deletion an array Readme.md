
#include <iostream>
void display(int arr[],int n)
{
    //code for traversal 
    for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
    printf("\t");
}

printf("\n");
}
void inddeletions(int arr[],int size,int index)
{
    //code for deletion 
    for (int i=index;i<size-1;i++)
    {
       arr[i] = arr[i+1];
    }
}

int main() {
    // Write C code here
int arr[10]={2,20,10,3,7};
int size= 5;
display(arr,5);
int index =1;
inddeletions ( arr, size, index);
size-=1;
display(arr,size);
printf("\n");

    return 0;
}
