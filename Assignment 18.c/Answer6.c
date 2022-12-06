#include<stdio.h>
int main()
{
    int size;
    int min;
    int temp;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d value of an array :",i+1);
        scanf("%d",&arr[i]);    
    }
// logic to making sort(ascending order) of an array
for(int i=0;i<size-1;i++)
{
    for(int j=i;j<size;j++)
    {
        if(arr[i]>arr[j+1])
        {
            temp=arr[i];
            arr[i]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("Your sorted array are...............\n");
for(int i=0;i<size;i++)
{
    printf("%d\t",arr[i]);
}
    return 0;
}
