#include <stdio.h>
int main()
{
    int n;
    int flag = 1; // let is prime used as flag variable 
    printf("Enter the number to find is this prime or not :");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i==0)
        {
            printf("Not a prime");
            break;
        }
    }
    if (flag == 1) // if flag contains 1 then it is prime
        printf("%d is prime number",n);
    else
        printf("Not a prime number ");     
    return 0;
}
