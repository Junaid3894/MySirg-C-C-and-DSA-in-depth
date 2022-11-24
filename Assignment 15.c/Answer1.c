//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int ,int);
int main()
{
    int a,b;
    int k;
    printf("Enter the two number to find its LCM :");
    scanf("%d%d",&a,&b);
    k=LCM(a,b);
    printf("LCM is %d",k);
    return 0;
} 
int LCM(int a,int b)
{
    int l;
    l=a>b?a:b;
    for(l;l<a*b;l=l+l)
    {
        if(a%l==0 && b%l==0)
        {
            return l;
            break;
        }
    }


}
