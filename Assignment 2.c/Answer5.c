#include<stdio.h>
int main()
{
float cost_price;
float selling_price;
float profit;
printf("Enter the cost price of banana per dozen:");
scanf("%f",&cost_price);
printf("Enter the selling price of banana per dozen:");
scanf("%f",&selling_price);
profit=((selling_price/12 - cost_price/12)*25 ) ;
printf("Your profit 25 bananas are %f",profit);
return 0;
}
