#include<stdio.h>
int main()
{
    int size;
    int max;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d value of an array :",i+1);
        scanf("%d",&arr[i]);    
    }
    max=arr[0];
// logic to find greatest number in an array
for(int i=0;i<size;i++)
{
    if(max<=arr[i])
        max=arr[i];
}
printf("Maximum element of an array is %d",max); 
    return 0;
}
