#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number which you want find prime numbers between them :");
    scanf("%d%d",&a,&b);
    for(int n=a+1;n<b;n++)
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
