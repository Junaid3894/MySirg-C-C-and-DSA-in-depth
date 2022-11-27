#include<stdio.h>
int odd_printN(int n );
int main()
{
    int n;
    printf("Enter n as far you want to see :");
    scanf("%d",&n);
    odd_printN(n*2);   
    return 0;
}
int  odd_printN(int n )
{
    if(n==0)
        return 1;
    else
    {
        odd_printN(n-1);
        if(n%2)
            printf("%d\t",n);
    }    
} 
