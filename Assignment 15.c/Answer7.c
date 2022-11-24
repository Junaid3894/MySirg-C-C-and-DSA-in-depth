// WA function to print first n terms of fibonacii series  TSRN
#include<stdio.h>
int fibo(int); // function prototype
int main()
{
    int n;
    printf("Enter a number as far you want to see fibonacii series:");
    scanf("%d",&n);
    fibo(n); // function calling 
    return 0;
} 
int fibo(int n)  // Function defination
{
    int a=-1,b=1;
    int c;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
}
