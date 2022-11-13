#include<stdio.h>
int main()
{
    for(int n=0;n<100;n++)
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i==n)
        {
            printf("%d\t",n);
        }
    }
        return 0;
}
