#include<stdio.h>
int main()
{
int n;
printf("Enter till where do you want to see the Cubes of numbers :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d\n",i*i*i);
}
return 0;
}

