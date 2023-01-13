#include<stdio.h>
void octal(int );
int main()
{
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   octal(n);
   return 0;
}
// 1. binary(n) 25=10011

//    printf("%d",n%2);
// 2. (n/2)
//    
// 3. n>=0
void octal(int n)
{
    if(n==1)
        printf("1");
    else

    {
        printf("%d",n%8);
        octal(n/8);

    }
                                    
}
