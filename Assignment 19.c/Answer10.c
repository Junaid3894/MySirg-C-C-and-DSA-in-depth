#include<stdio.h>
void occurence(int *arr,int size);
int main()
{
   int arr[7];
   // Taking input from user
   for(int i=0;i<7;i++)
   {
      printf("Enter the %d value of an array :",i+1);
      scanf("%d",&arr[i]);
   }
   occurence(arr,7);
   return 0;
}
void occurence(int *arr,int size)
{
    int arr_count[size];
    arr_count[0]=0;
    int count=1;
   for(int i=0;i<size;i++)
   {
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
            arr[j]=0;
        }

    }
    arr_count[i]=count;
    count=1;
   }
printf("Unique elements are.........\n");   
for(int i=0;i<size;i++)
{
    if(arr[i]!=0)
        printf("%d occurs %d times\n",arr[i],arr_count[i]);
}
}
