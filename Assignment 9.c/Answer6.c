#include<stdio.h>
int main()
{
int n;
int fact=1;
printf("Enter a number which you want to find its factorial :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    fact*=i;
printf("Factorail of %d is %d ",n,fact);
    
return 0;
}
