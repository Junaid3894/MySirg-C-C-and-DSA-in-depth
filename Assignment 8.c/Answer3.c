#include<stdio.h>
int main()
{
int n;
printf("Enter how many natural numbers you want to see in reverse order :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d\n",n+1-i);
}
return 0;
}
