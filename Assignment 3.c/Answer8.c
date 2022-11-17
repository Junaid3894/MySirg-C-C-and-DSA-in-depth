#include<stdio.h>
int main()
{
    int a=10,b=20;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swapping\n The value of a is %d\nThe value of b is %d",a,b);
    return 0;
}
