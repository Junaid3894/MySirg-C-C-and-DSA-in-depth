#include<stdio.h>
#include<string.h>
int main()
{
   char str[20];
   printf("Enter the string :");
   fgets(str,20,stdin);
   str[strlen(str)-1]='\0';
   for(int i=0;str[i];i++)
   {
    if(str[i]!=32)
        str[i]+=32;
   }
   printf("Your string after lowercase..\n");
   printf("%s",str);
   return 0;
}
