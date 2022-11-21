#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of student to find its grade :");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
        printf("A grade");
        break;
        case 80 ... 89:
        printf("B garde");
        break;
        case 70 ... 79:
        printf("C grade");
        break;
        case 60 ...69:
        printf("D grade");
        break;
        case 50 ...59:
        printf("E grade");
        break;
        case 0 ... 49:
        printf("Fail");
        break;
        default:
        printf("Invalid Marks please enter between 1 to 100");
    }
    return 0;
}
