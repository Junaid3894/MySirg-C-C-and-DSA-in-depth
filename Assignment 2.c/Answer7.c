#include<stdio.h>
int main()
{
char a,b,c;
printf("Enter the three characters to find its ASCII value :");
scanf("%c %c %c",&a,&b,&c);
printf("Your ASCII values of Corresponding characters are\n");
printf("%c -> %d\n%c -> %d\n%c -> %d",a,a,b,b,c,c);

return 0;
}
