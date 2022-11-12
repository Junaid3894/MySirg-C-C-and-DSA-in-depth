#include<stdio.h>
int main()
{
int n;
int reverse=0;
int remainder;
printf("Enter number :");
scanf("%d",&n);
for(int i=1;n;i++)
{
    remainder=n%10;
    n/=10;
    reverse=reverse*10 + remainder;
}
printf("Your reverse is %d",reverse);
return 0;
}
