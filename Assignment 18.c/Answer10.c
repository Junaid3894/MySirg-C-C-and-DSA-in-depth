#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int arr[size];
    int arr_copy[size];// to copy the elements in this array
    for(int i=0;i<size;i++)
    {
      printf("Enter the value %d value of an array :",i+1);
      scanf("%d",&arr[i]);
    }
    // logic to copy the elements of ane array to anoter array
    for(int i=0;i<size;i++)
    {
      arr_copy[i]=arr[i];
    }
    // finally printing the copied array 
    for(int i=0;i<size;i++)
    {
      printf("%d\t",arr[i]);
    }
    return 0;
}
