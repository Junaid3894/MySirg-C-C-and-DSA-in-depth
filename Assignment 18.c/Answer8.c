#include<stdio.h>
int main()
{
int arr[20];
int n;
// input size of array from user
printf("Enter the size of the array :");
scanf("%d",&n);
// input array from user
for(int i=0;i<n;i++){
   printf("Enter the %d value of the array :",i+1);
   scanf("%d",&arr[i]);
}
// logic to find second smallest value
// first find sorting in ascending order
for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
         int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
      }
   }
}
// finally print the second smallest element
printf("The second smallest value is %d\n",arr[1]);
return 0;
}
