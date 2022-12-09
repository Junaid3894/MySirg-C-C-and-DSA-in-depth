/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include <stdio.h>
void arr_rotate(int *arr, int size, int n, int d); // function defination
int main()
{
   int size;
   int n, d;
   printf("Enter the size of an array :");
   scanf("%d", &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      printf("Enter the %d value of the array :", i + 1);
      scanf("%d", &arr[i]);
   }
   printf("Enter how many times you want to rotate an array :");
   scanf("%d", &n);
   printf("Enter the Direction, Enter 1 for left and 2 for right :");
   scanf("%d", &d);
   arr_rotate(arr, size, n, d); // function call
   return 0;
}
void arr_rotate(int *arr, int size, int n, int d)
{
   int temp;
   switch (d)
   {
   case 1:

      // For Left Indicative
      for (int k = 1; k <= n; k++)
      {
         temp = arr[0];
         for (int i = 0; i < size; i++)
         {
            arr[i] = arr[i + 1];
         }
         arr[size - 1] = temp;
      }
      for (int i = 0; i < size; i++)
      {
         printf("%d\t", arr[i]);
      }
      break;

   case 2:

      // For Right Indicative
      for (int k = 1; k <= n; k++)
      {
         temp = arr[size - 1];
         for (int i = 0; i < size; i++)
         {
            arr[size - i - 1] = arr[size - i - 2];
         }
         arr[0] = temp;
      }
      for (int i = 0; i < size; i++)
      {
         printf("%d\t", arr[i]);
      }
      break;

   default:
      printf("Invalid choice please choose 1 or 2");
   }
}
