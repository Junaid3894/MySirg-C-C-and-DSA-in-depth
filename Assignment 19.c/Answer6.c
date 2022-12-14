/* Write a function to swap to two elements of given array with specified indices*/
#include<stdio.h>
void swap_array(int *arr,int size,int index1,int index2 );
int main()
{
   int arr[10];
   for(int i=0;i<10;i++)
   {
      printf("Enter the %d value of an array :",i+1);
      scanf("%d",&arr[i]);
   }
   swap_array(arr,10,5-1,10-1);
   //finally print the whole array after swapping
   for(int i=0;i<10;i++)
   {
      printf("%d\t",arr[i]);
   }
   return 0;
}
void swap_array(int *arr,int size,int index1,int index2)
{
   // Logic to swap
   int temp=arr[index1];
   arr[index1]=arr[index2];
   arr[index2]=temp;

}
