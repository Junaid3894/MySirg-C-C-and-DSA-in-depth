#include<stdio.h>
int main()
{
int n,sum=0;;
printf("Enter till where do you want to sum of naturals number :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    sum+=i;
printf("Sum of first %d numbers are %d",n,sum);    
return 0;
}
