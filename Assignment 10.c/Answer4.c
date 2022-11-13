#include<stdio.h>
int main()
{
int a,b;
printf("Enter the two number to find its HCF :");
scanf("%d %d",&a,&b);
for(int h=a>b?b:a;h>=1;h--)
if(a%h==0 && b%h==0)
{
    printf("HCF is %d",h);
    break;
}

return 0;
}
