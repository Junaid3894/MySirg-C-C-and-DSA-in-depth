#include<stdio.h>
int main()
{
    int n;
    int unit;  
    printf("Enter any number :");
    scanf("%d",&n);
    n/=10;
    printf("Your number after escape unit digit = %d ",n);
    
    return 0;
}
