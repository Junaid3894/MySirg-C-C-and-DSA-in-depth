// write a fuction to sort an array of any size (TSRN)
#include <stdio.h>
void arr_Sort(int *, int); // function defination
int main()
{
   int size;
   printf("Enter the size of the array :");
   scanf("%d", &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      printf("Enter the %d value of an array :", i + 1);
      scanf("%d", &arr[i]);
   }   
      arr_Sort(arr, size);
      printf("Sorted array elements are................\n ");
      for (int i = 0; i < size; i++)
      {
         printf("%d\t", arr[i]);
      }
      return 0;
   }
void arr_Sort(int *arr, int size)
{
   for (int i = 0; i < size; i++)
   {
      for (int j = i; j < size - 1; j++)
      {
         if(arr[i]>arr[j+1])
         {
            int temp=arr[i];
            arr[i]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
}
