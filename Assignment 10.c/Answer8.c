#include<stdio.h>
int main()
{
    int p,i;
    printf("Enter the prime number to find next prime number :");
    scanf("%d",&p);
    for(i=2;i<p;i++)
    {
            // To check given number is prime or not
            if(p%i==0)
            {
                printf("%d is not a prime number ",p);
                break;
            }
    }   
    // Logic to find next prime number
    if(i==p)
    {
        for(++p;;p++)
        {
            int i;
            for(i=2;i<p;i++)
            {
                if(p%i==0)
                {
                    break;
                }
                }
                if(i==p)
                {
                    printf("Your next prime is %d\t",p);
                    break;
                }
            }
    }
            return 0;
}
