#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter number :");
    scanf("%d",&n);
    sum+=n/100 + n/10%10 + n%10; 
    printf("%d",sum);
    return 0;
}
