#include<stdio.h>
int main()
{
int n;
int a=0,b=1;
int c;
printf("Enter the nth term of fibonacci which you want to see :");
scanf("%d",&n);
for(int i=3;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
printf("%d",c);
return 0;
}
