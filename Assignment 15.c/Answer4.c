#include<stdio.h>
int next_prime(int); // function prototype
int main()
{
    int n;
    int k;
    printf("Enter a number to find next prime number :");
    scanf("%d",&n);
    k=next_prime(n); // function calling 
    printf("Your next prime is %d ",k);
    return 0;
} 
int next_prime(int number)  // Function defination
{
    int i;
    number++;
    for(int j=number;;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;   
        }
        if(i==j)
        {
            return j ;    
            break;
        }
    }
}
