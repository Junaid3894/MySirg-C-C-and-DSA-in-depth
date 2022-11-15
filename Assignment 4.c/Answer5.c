#include<stdio.h>
int main()
{
    int number;
    int digit;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("Enter the digit which you want append in number :");
    scanf("%d",&digit);
    number = number *10 + digit;
    printf("your result is %d ",number);
    return 0;
}
