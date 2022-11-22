#include<stdio.h>
float simple_interest(float,float,int ); //  Function Decleration
int main()
{
    float p,r;
    int t;
    printf("Enter principle,rate of interest and time :");
    scanf("%f%f%d",&p,&r,&t);
    printf("your simple interest is %.2f",simple_interest(p,r,t)); // Function calling   
    return 0;
}
float simple_interest(float principle,float rate,int time)  // function definaton
{
    float interest;
    interest=principle*rate*time/100;
    return interest;
}
