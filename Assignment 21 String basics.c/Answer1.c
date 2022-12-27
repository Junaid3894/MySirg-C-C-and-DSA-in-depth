//Write a program to calculate length of the string (with using biulin method)
#include<stdio.h>
int main()
{
   char str[10];
   int i;
   printf("Enter the string :");
   scanf("%s",str);
   for(i=1;str[i];i++);
   printf("%d\t",i);
   return 0;
}
