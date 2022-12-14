/*9. Write a function in C to merge two arrays of the same size sorted in descending
order.*/

#include<stdio.h>
int merge_arr(int *arr1,int *arr2,int size);
int main()
{
   int arr1[20],arr2[20];
   int size;
   
   printf("Enter the size of the array : ");
   scanf("%d",&size);
   int merge[size*2];
   for(int i=0;i<size;i++){
      printf("Enter the %d value of the  first array :",i+1);
      scanf("%d",&arr1[i]);
   }
   for(int i=0;i<size;i++){
      printf("Enter the %d value of the element of second array: ",i+1);
      scanf("%d",&arr2[i]);
   } 
   merge_arr(arr1,arr2,size);


   return 0;
}
   int merge_arr(int *arr1,int *arr2,int size){
      int merge[size*2];
      int temp;
   // Assigning array into merging array   
   for(int k=0,j=0;k<size*2;k++){
      merge[k]=arr1[j];
      j++;
   }
   for(int k=4,j=0;k<size*2;k++){
      merge[k]=arr2[j];
      j++;
   }
   // logic of sorting in descending order
   for(int i=0;i<size*2;i++){
      for(int j=i+1;j<size*2;j++){
         if(merge[i]<merge[j]){
            temp=merge[j];
            merge[j]=merge[i];
            merge[i]=temp;
         }
      }
      


   }
   for(int i=0;i<size*2;i++){
   printf("%d\t",merge[i]);
   }
  
   }
