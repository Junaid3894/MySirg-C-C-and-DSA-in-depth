#include<stdio.h>
int main()
{
    int x,n;
    int remainder,cube,sum;
    for(n=1;n<=1000;n++)
    {  
        sum=0;
        x=n; // X variable for reserve the original value 
        for(int i=1;x;i++)
        {
            remainder=x%10;
            x/=10;
            cube=remainder*remainder*remainder;
            sum+=cube;
        }
        if(sum==n)
        {
            printf("%d\t",n);
        }
    }
    return 0;
}
