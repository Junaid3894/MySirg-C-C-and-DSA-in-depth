#include<stdio.h>
int main()
{
    int n;
    int unit;  // Assigning unit digit
    printf("Enter any number :");
    scanf("%d",&n);
    unit= n%10;
    printf("%d",unit);
    
    return 0;
}
