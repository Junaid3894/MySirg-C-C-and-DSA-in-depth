#include<stdio.h>
#include<string.h>
int main()
{
   char str[20];
   char str_copy[20];
   printf("Enter the string :");
   fgets(str,20,stdin);
   str[strlen(str)-1]='\0';
   for(int i=0;str[i];i++)
   {
    str_copy[i]=str[i];
   }
   printf("%s",str_copy);
   return 0;
}
