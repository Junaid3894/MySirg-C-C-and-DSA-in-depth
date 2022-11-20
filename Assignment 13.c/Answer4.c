#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    while(1)
    {
        int n;
        int a,b,c;
        printf("\nEnter Menu driven number \n");
        printf("1.Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("3.Check whether a given set of three numbers are equilateral triangle \n");
        printf("4. Exit");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
           
            printf("Enter the length side of Isosoceles triangle ");
            scanf("%d%d%d",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
            {
                if(a==b || b==c || c==a)
                {
                    printf("Yes it is isosceles triangle ");
                }
                else
                {
                    printf("Not a isosceles triabgle");

                }
            }
            else
            {
                printf("Not a valid triangle ");
            }
            break;
            case 2:
            printf("Enter the lenght of side of right angled triangle ");
            scanf("%d%d%d",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
            {
                if(a*a + b*b == c*c || b*b + c*c==a*a || a*a + c*c == b*b )
            {
                printf("Yes it is right angled triangle");
            }
                else
                {
                    printf("Not a valid traingle");

                }
            }
            else
            {
                printf("Not a valid triangle ");
            }
            
            break;
            case 3:
            printf("Enter the length of side of Equilateral triangle ");
            scanf("%d%d%d",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
            {
                if(a==b && c==a)
            {
                printf("Yes it is equilateral  triangle");
            }
                else
                {
                    printf("Not a valid traingle");

                }
            }
            else
            {
                printf("Not a valid triangle ");
            }
            
            break;
            case 4:
            exit(0);
        }
    }
        return 0;
}
