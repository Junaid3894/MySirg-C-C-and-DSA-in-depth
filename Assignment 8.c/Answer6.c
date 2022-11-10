#include<stdio.h>
int main()
{
int n;
printf("Enter how many first even numbers you want to see :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d\n",2*i);
}
return 0;
}
