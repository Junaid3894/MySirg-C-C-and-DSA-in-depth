#include<stdio.h>
int main()
{
int size;
// input size of array from user
printf("Enter the size of the array :");
scanf("%d",&size);
int arr[size];
// input array elements from user
for(int i=0;i<size;i++){
   printf("Enter the %d value of the array :",i+1);
   scanf("%d",&arr[i]);
}
// first find sorting in ascending order
for(int i=0;i<size;i++){
   for(int j=i+1;j<size;j++){
      if(arr[i]<arr[j]){
         int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
      }
   }
}
// finally printing the whole array
for(int i=0;i<size;i++)
{
   printf("%d\t",arr[i]);
}
return 0;
}
