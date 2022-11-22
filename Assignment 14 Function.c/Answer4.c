#include<stdio.h>
void print_natural_num(int ); //  Function Decleration
int main()
{
    int n;
    printf("Enter a number as far as you want see a natural numbers :");
    scanf("%d",&n);
    print_natural_num(n);
    return 0;
}
void print_natural_num(int n )// function definaton
{
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
}
