#include<stdio.h>
int main()
{
float radius;
float area;
printf("Enter the radius of circle :"); // Taking input from user
scanf("%f",&radius);
area = 2*3.14*radius*radius;
printf("Circumference of circle is %.2f",area);
return 0;
}
