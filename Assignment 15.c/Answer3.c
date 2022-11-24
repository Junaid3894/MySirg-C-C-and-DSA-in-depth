#include<stdio.h>
int check_prime(int); // function prototype
int main()
{
    int n;
    int k;
    printf("Enter a number to check it is prime or not :");
    scanf("%d",&n);
    k=check_prime(n); // function calling 
    if(k==1)
        printf("%d is prime number ",n);
    else
        printf("Not a prime ");    
    return 0;
} 
int check_prime(int number)  // Function defination
{
    int i;
    for(i=2;i<number;i++)
    {
        if(number%i==0)
            break;
    }
    if(i==number)
    {
        return 1;
    }
}
