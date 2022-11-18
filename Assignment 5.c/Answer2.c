#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to find its divisible 5 or not :");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Yes %d is divisible by 5 ",n);
    }
    else
        printf("Not divisible by 5");
    return 0;
}
