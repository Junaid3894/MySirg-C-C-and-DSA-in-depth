#include<stdio.h>
int main()
{
    int x,n;
    int remainder,cube,sum=0;
    printf("Enter the number to find its Armstrong or not :");
    scanf("%d",&n);
    x=n;
    for(int i=1;n;i++)
    {
        remainder=n%10;
        n/=10;
        cube=remainder*remainder*remainder;
        sum+=cube;
    }
    if(sum==x)
    {
        printf("Yes it is Armstrong number ");
    }
    else
    {
        printf("Not a Armstrong ");
    }

    return 0;
}
