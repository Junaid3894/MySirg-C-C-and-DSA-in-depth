// write a function to find first occurence of adjacent dublicate value in an array .
// function has to return a value of the element
#include<stdio.h>
int occurence(int *arr,int size,int dub);
int main()
{
   int arr[10];
   int dublicate;
   int occu;
   // Taking input from user
   for(int i=0;i<10;i++)
   {
      printf("Enter the %d value of an array :",i+1);
      scanf("%d",&arr[i]);
   }
   printf("Enter the value which you want find its occurence of dublicate in an array :");
   scanf("%d",&dublicate);
   occu = occurence(arr,10,dublicate);
   printf("Your occurence of %d is %d",dublicate,occu);
   return 0;
}
int occurence(int *arr,int size,int dub)
{
   int count=0;
   for(int i=0;i<size;i++)
   {
      if(arr[i]==dub)
         count++;
   }
   return count-1;
}
