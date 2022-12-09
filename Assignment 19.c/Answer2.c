// write a function to find smallest number from the given array of any size(TSRS)
#include<stdio.h>
int arr_smallest_element(int *,int);  // function defination
int main()
{
   int size;
   printf("Enter the size of the array :");
   scanf("%d",&size);
   int arr[size];
   for(int i=0;i<size;i++)
   {
      printf("Enter the %d value of an array :",i+1);
      scanf("%d",&arr[i]);
   }
   printf("Smallest element in an array is %d",arr_smallest_element(arr,size)); // functon call in printf function
    return 0;
}
int arr_smallest_element(int *arr,int size)
{
   int min=arr[0];
   for(int i=0;i<size;i++)
   {
      if(min>arr[i])
         min=arr[i];
   }
return min;
}
