#include<stdio.h>
int main()
{
int n;
int a=0,b=1;
int c;
printf("Enter the nth term of fibonacci as far as you want to see :");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(int i=1;i<=n-2;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
return 0;
}
