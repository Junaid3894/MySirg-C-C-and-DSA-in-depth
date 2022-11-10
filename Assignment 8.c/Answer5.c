#include<stdio.h>
int main()
{
int n;
printf("Enter how many first odd numbers you want to see in reverse order:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d\n",n*2-(2*i-1));
}
return 0;
}
