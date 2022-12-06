#include<stdio.h>
int main()
{
    int size;
    int even_sum=0;
    int odd_sum=0;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d value of the array :",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even_sum+=arr[i];
        else
            odd_sum+=arr[i];    
    }
printf("Sum of even elements of array is %d\n",even_sum);
printf("Sum of odd elements of array is %d\n",odd_sum);

    return 0;
}
