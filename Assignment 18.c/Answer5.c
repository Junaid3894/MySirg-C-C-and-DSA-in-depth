#include<stdio.h>
int main()
{
    int size;
    int min;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d value of an array :",i+1);
        scanf("%d",&arr[i]);    
    }
    min=arr[0];
// logic to find greatest number in an array
for(int i=0;i<size;i++)
{
    if(min>=arr[i])
        min=arr[i];
}
printf("Minimum element of an array is %d",min); 
    return 0;
}
