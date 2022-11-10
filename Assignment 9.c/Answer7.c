#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter a number to count its digit :");
scanf("%d",&n);
for(int i=1;n!=0;i++){
    n/=10;
    count++;
}
printf("%d",count);

return 0;
}
