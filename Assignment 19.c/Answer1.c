// write a function to find greatest number from given array of any size(TSRS)
#include<stdio.h>
int arr_greatest_element(int *,int);  // function defination
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
   printf("Greatest element in an array is %d",arr_greatest_element(arr,size)); // functon call in printf function
    return 0;
}
int arr_greatest_element(int *arr,int size)
{
   int max=arr[0];
   for(int i=0;i<size;i++)
   {
      if(max<arr[i])
         max=arr[i];
   }
return max;
}
