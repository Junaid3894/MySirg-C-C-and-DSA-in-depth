/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit     */
#include<stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int n;
        int a,b,c;
        // Input a menu driven option which you want to find
        printf("\nEnter Menu Driven Number : \n ---------------------");
        printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
        printf("Enter Two numbers :");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("Addition of two numbers is %d",c);
        break;
        case 2:
        printf("Enter Two numbers :");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("Subtraction of two numbers is %d",c);
        break;
        case 3:
        printf("Enter Two numbers ");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("Multiplication of two numbers is %d",c);
        break;
        case 4:
        printf("Enter Two numbers :");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("Division of two numbers is %d",c);
        break;
        case 5:
        exit(0);
        default :
            printf("Invalid please enter a options between 1 to 4");
        }
    }
    return 0;
}
