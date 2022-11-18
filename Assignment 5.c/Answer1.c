#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to find its positive or non-positive :");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is Positve number",n);
    }
    else
        printf("%d is Non-positve number",n);
    return 0;
}
