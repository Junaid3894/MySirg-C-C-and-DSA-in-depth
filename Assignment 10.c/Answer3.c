#include<stdio.h>
int main()
{
int n;
int a=0,b=1,i=1;
int c=0;
printf("Enter term of fibonacii which you want to check its fibo or not :");
scanf("%d",&n);
for(i=1;i<=100;i++)
{
if(c==n)
{
printf(" Yes %d is fibonacii term ",c);
break;
}
c=a+b;
a=b;
b=c;
}
if(i==101)
{
    printf("Not a term of fibonacii series ");
}
return 0;
}
