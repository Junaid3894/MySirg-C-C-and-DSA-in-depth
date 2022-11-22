#include<stdio.h>
int check_even_odd(int ); //  Function Decleration
int main()
{
    int n;
    int flag;
    printf("Enter the number to find its Even or odd :");
    scanf("%d",&n);
    flag=check_even_odd(n);
    if(flag==1)
        printf("%d is Even",n);
    else
        printf("%d is odd",n);
    return 0;
}
int check_even_odd(int n)  // function definaton
{
    if(n%2==0)
        return 1;
    return 0;    
}
