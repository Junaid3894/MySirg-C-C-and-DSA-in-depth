#include<stdio.h>
int main()
{
int n,sum=0;;
printf("Enter how many first squares numbers you want add :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    sum+=i*i;
printf("Sum of first %d squares numbers are %d",n,sum);    
return 0;
}
