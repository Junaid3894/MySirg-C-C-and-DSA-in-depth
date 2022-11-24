#include<stdio.h>
int check_digit(int ,int );
int main()
{
    int number,digit;
    int k;
    printf("Enter Any number :");
    scanf("%d",&number);
    printf("Enter digit which you want check a given number contains a digit or not :");
    scanf("%d",&digit);
    k=check_digit(number,digit);
    if(k==1)
        printf("Yes %d number contains a %d digit",number,digit);
    else    
        printf("Not Contains ");    
    return 0;
}
int check_digit(int number ,int n)
{
    int remainder;
    for(int i=1;n!=0;i++)
    {
        remainder=number%10;
        number/=10;
        if(remainder==n)
        {
            return 1;
        }
    }
    return 0;
}
