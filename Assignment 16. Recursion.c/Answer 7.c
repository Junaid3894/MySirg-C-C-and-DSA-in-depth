#include<stdio.h>
void square_print(int n );
int main()
{
    int n;
    printf("Enter n as far you want to see :");
    scanf("%d",&n);
    square_print(n);   
    return 0;
}
void square_print(int n )
{
    if(n>0)
    {
        square_print(n-1);
        printf("%d\n",n*n);
    }    
} 
