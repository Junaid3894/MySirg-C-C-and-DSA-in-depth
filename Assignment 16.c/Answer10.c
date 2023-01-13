#include<stdio.h>
void reverse(int );
int main()
{
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   reverse(n);
   return 0;
}
// 1. reverse n 123 = 32

//    printf(n%10);
// 2. reverse(n/10);
//    
// 3. n==0
void reverse(int n)
{
    if(n==0)
        printf("0");
    else

    {
        printf("%d",n%10);
        reverse(n/10);

    }
                                    
}
