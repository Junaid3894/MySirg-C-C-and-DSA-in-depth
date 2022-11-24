//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int ,int);
int main()
{
    int a,b;
    int k;
    printf("Enter the two number to find its HCF :");
    scanf("%d%d",&a,&b);
    k=HCF(a,b);
    printf("HCF is %d",k);
    return 0;
} 
int HCF(int a,int b)
{
    int l;
    l=a>b?a:b;
    for(l;l>=1;l--)
    {
        if(a%l==0 && b%l==0)
        {
            return l;
            break;
        }
    }


}
