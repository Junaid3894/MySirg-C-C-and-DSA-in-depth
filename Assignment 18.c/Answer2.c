#include<stdio.h>
int main()
{
    int size;
    float sum=0;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d value of the array :",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("Average of whole array is %.2f",sum/size);
    return 0;
}
