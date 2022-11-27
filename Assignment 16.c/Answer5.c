#include<stdio.h>
int even_printN(int n );
int main()
{
    int n;
    printf("Enter n as far you want to see :");
    scanf("%d",&n);
    even_printN(n*2);   
    return 0;
}
int  even_printN(int n )
{
    if(n==0)
        return 1;
    else
    {
        even_printN(n-1);
        if(n%2==0)
            printf("%d\t",n);
    }    
} 
