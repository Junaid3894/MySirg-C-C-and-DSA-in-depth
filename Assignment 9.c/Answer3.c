#include<stdio.h>
int main()
{
int n,sum=0;;
printf("Enter how many first odd numbers you want add :");
scanf("%d",&n);
for(int i=1;i<=n*2;i++){
    if(i%2)
        sum+=i;
}
printf("Sum of first %d numbers are %d",n,sum);    
return 0;
}
