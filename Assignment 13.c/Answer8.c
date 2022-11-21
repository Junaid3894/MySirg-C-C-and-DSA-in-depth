#include<stdio.h>
int main()
{
    char c;
    printf("Enter charcter :");
    scanf("%c",&c);
    switch(c)
    {
        case 'A' ... 'Z':
        printf("Upper case ");
        break;

        case 'a' ... 'z':
        printf("Lower case ");
        break;

        default:
        printf("Some other special charactes");
    }
    return 0;
}
