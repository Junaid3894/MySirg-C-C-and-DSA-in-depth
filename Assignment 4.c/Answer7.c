#include<stdio.h>
int main()
{
    int n;
    printf("Enter the three digit number :");
    scanf("%d",&n);
    n=(n%10*10 + n/10%10)*10 + n/100;
    printf("Your rotated number is %d",n);
    return 0;
}
