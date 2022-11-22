#include<stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int choice;
        int a,b,l,remainder,c;
        int sum=0,n,i=2;
        // Input a menu driven option which you want to find
        printf("\nEnter Menu Driven Number : \n ---------------------");
        printf("\n1. Calculate LCM of Two number\n 2. Calculate sum of the digits of a number\n 3. Volume of Cuboid\n 4.check a given is prime number or not  \n5. Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter Two number :");
        scanf("%d%d",&a,&b);
        l=a>b?a:b;
        for(l;l<=a*b ;l++)
        {
            if(l%a==0 && l%b==0 )
            {
                printf("Your LCM is %d",l);
                break;
            }
        }

       
        break;

        case 2:
        printf("Enter any numbers :");
        scanf("%d",&n);
        for(int i=1;n!=0;i++)
        {
        remainder=n%10;
        n/=10;
        sum+=remainder;
        }
        printf("Sum of digits are : %d",sum);
        break;

        case 3:
        printf("Enter length, width and height :");
        scanf("%d%d%d",&a,&b,&c);
        printf("Area of cuboid is  %d",a*b*c);
        break;

        case 4:
        printf("Enter Any number to find its prime or not");
        scanf("%d",&n);
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                printf("Not a prime");
                break;
            }
        }
        if(i==n)
        {
            printf("%d is prime number",n);
        }
        break;

        case 5:
        exit(0);
        default :
            printf("Invalid please enter a options between 1 to 4");
        }
    }
    return 0;
}
