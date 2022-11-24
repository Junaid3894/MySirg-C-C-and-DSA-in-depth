// WA function to print all prime between two given number TSRN 
#include<stdio.h>
int print_prime(int,int ); // function prototype
int main()
{
    int a,b;
    printf("Enter the two number as you want to see between prime number :");
    scanf("%d%d",&a,&b);
    print_prime(a,b); // function calling 
    return 0;
} 
int print_prime(int n1,int n2)  // Function defination
{
    int i;
    for(int j=n1;j<=n2;j++)  
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;   
        }
        if(i==j)
        {
            printf("%d\t",j);
        }
    }
}
