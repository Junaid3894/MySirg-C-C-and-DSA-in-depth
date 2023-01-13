#include<stdio.h>
void binary(int );
int main()
{
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   binary(n);
   return 0;
}
// 1. binary(n) 25=10011

//    printf("%d",n%2);
// 2. (n/2)
//    
// 3. n>=0
void binary(int n)
{
    if(n==1)
        printf("1");
    else

    {
        printf("%d",n%2);
        binary(n/2);

    }
                                    
}
