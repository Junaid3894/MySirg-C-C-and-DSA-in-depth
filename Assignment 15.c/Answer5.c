// WA function to print first N prime numbers TSRN
#include<stdio.h>
int print_prime(int); // function prototype
int main()
{
    int n;
    printf("Enter a number as far as you want to see a prime number :");
    scanf("%d",&n);
    print_prime(n); // function calling 
    return 0;
} 
int print_prime(int number)  // Function defination
{
    int i;
    for(int j=1;j<=number;j++)  //number variable for as far you want to see
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;   
        }
        if(i==j)
        {
            printf("%d\t",j);
        }
    }
}
