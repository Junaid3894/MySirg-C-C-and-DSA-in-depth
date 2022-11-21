#include<stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int choice;
        int a,d,c;
        int n,fact=1,sum;
        // Input a menu driven option which you want to find
        printf("\nEnter Menu Driven Number : \n ---------------------");
        printf("\n1. Factorial of a number \n 2. Check Even and odd\n 3.Area of circle \n 4.Sum of first N natural number \n5. Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter number to find factorial :");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("Factoral of %d is %d ",n,fact);
        break;

        case 2:
        printf("Enter any numbers :");
        scanf("%d",&n);
        if(n%2==0)
            printf("Even");
        else
            printf("odd");
        break;

        case 3:
        printf("Enter Radius of a circle :");
        scanf("%d",&n);
        printf("Area of circle is %f having  the radius %d",3.14*n*n,n);
        break;

        case 4:
        printf("Enter number as far you want to sum a natural number :");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        printf("Sum of First %d natural number are %d",n,sum);
        break;

        case 5:
        exit(0);
        default :
            printf("Invalid please enter a options between 1 to 4");
        }
    }
    return 0;
}
