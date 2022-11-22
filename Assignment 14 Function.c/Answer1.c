#include<stdio.h>
float area_of_circle(int ); //  Function Decleration
int main()
{
    int radius;
    printf("Enter radius of a cirlce :");
    scanf("%d",&radius);
    printf("Your Area of circle is %f having radius %d ",area_of_circle(radius),radius); // Function calling   
    return 0;
}
float area_of_circle(int radius)  // function definaton
{
    float area;
    area=3.14*radius*radius;
    return area;
}
