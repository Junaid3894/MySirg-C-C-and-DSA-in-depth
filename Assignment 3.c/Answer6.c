#include<stdio.h>
int main()
{
    int a,b;
    int temp;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping value of a is %d and b is %d",a,b);
    return 0;
}
