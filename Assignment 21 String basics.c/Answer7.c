#include<stdio.h>
#include<string.h>
int main()
{
   char str[20];
   int count=0;
   printf("Enter the string :");
   fgets(str,20,stdin);
   str[strlen(str)-1]='\0';
   // logic to count all alphabet
   for(int i=0;str[i];i++)
   {
    count++;
   }
   // logic to reverse a string
   for(int i=0;i<=count/2;i++)
   {
    char temp;
    temp=str[i];
    str[i]=str[count-1-i];
    str[count-1-i]=temp;
   }
printf("%s",str);
   return 0;
}
