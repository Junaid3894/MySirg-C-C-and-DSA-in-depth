#include<stdio.h>
int main()
{
    int a=10; // binary 00001010
    int b=20; // binary 00010100
    a=a^b;    //  ->  a=00011110
    b=a^b;    //      b=00010100 -> 00001010
    a=a^b;  // a=00011110
            // b=00001010 -----------------------
            // a=00010100 -----------------------
    printf("After swapping\n The value of a is %d\nThe value of b is %d",a,b);
    return 0;
}
