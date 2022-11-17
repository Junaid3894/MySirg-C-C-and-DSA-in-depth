#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    a=a+b-(b=a);
    printf("After swapped\n value of a is %d\nvalue of b is %d",a,b);
    return 0;
}
