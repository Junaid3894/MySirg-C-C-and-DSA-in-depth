//Write a program to count the occurence of given character 
#include<stdio.h>
int main()
{
   char str[10];
   char c;
   int count=0;
   printf("Enter the string :");
   fgets(str,10,stdin);
   printf("Enter the character which you want find its occurence:");
   fflush stdin;
   scanf("%c",&c);
   for(int i=0;str[i];i++)
    if(str[i]==c)
        count++;
   printf("Occurence of %c is %d",c,count);
   return 0;
}
