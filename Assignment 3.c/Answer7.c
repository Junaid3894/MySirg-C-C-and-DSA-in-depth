#include<stdio.h>
int main()
{
    int a=5;
    int b=7;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping value of a is %d and b is %d",a,b);
    return 0;
}
