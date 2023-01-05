#include<stdio.h>
#include<string.h>
int main()
{
   char str[20];
   char character;
   int i;
   int l;
   printf("Enter the string :");
   fgets(str,20,stdin);
   l=str[strlen(str)-1]='\0';
   printf("Enter the character which you want to check its occurence :");
   scanf("%c",&character);
   for(i=0;i<l;i++)
   {
    if(str[i]==character)
        break;
   }
   if(i==l)
    printf("Not");
   else
    printf("Yes");  
   return 0;
}
