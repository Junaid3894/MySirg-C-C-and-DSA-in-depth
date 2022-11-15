#include<stdio.h>
int main()
{
    int n;
    printf("Enter four digit number :");
    scanf("%d",&n);
    n=n/10 *10 ;
    printf("%d",n);
    return 0;
}
