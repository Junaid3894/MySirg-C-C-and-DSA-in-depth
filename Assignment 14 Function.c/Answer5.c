#include<stdio.h>
void print_odd_natural_num(int ); //  Function Decleration
int main()
{
    int n;
    printf("Enter a number as far as you want see a first odd natural numbers :");
    scanf("%d",&n);
    print_odd_natural_num(n);
    return 0;
}
void print_odd_natural_num(int n )// function definaton
{
    for(int i=1;i<=n*2;i++)
    {   
        if(i%2)
        printf("%d\t",i);
    }
}
