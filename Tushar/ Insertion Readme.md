#include <iostream>
void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
}
int indinsertion(int arr[],int size,int elements,int capacity,int index)
{
// code for insertion 
    if (size>=capacity)
    {
        return -1;
    }
    for (int i=size-1;i>=index;i--)
    {
       arr[i+1] = arr[ i];
    }
    arr[index]= elements;
    return 1;
}

int main() {
    // Write C code here
int arr[10]={2,10,3,7};
int size= 4;
display(arr,4);
int elements = 18;
int index =3;
indinsertion ( arr, size, elements,10, index);
size+=1;
display(arr,size);

    return 0;
}

