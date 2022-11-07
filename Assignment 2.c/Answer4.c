#include<stdio.h>
int main()
{
float length;
float width;
float height;
// Input length ,width and height from user 
printf("Enter the length,width and height of the cuboid :");
scanf("%f%f%f",&length,&width,&height);
printf("Area of cuboid is %.2f",length*width*height);
return 0;
}
