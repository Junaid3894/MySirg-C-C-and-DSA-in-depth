#include<stdio.h>
int fact(int ); //  Function Decleration
int main()
{
    int n;
    printf("Enter a number to find its factorial :");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
int fact (int n )// function definaton
{
    int fact=1;
    while(n)
        {
            fact*=n;
            n--;
        }
    return fact;    
}
