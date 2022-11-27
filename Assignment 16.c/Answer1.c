#include<stdio.h>
int rec_printN(int n );
int main()
{
    int n;
    printf("Enter n as far you want to see :");
    scanf("%d",&n);
    rec_printN(n);   
    return 0;
}
int  rec_printN(int n )
{
    if(n==0)
        return 1;
    else
    {
        rec_printN(n-1);
        printf("%d\t",n);
    }    
} 
