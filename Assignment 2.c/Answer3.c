#include<stdio.h>
int main()
{
int principle;
float rate;
float time;
printf("Enter principle :");
scanf("%d",&principle);
printf("Enter Rate of interest :");
scanf("%f",&rate);
printf("Enter time :");
scanf("%f",&time);
printf("Your simple interst is %.2f",principle*time*rate/100);
return 0;
}
