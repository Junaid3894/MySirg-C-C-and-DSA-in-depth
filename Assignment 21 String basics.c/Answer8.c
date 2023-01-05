#include<stdio.h>
#include<string.h>
int main()
{
   char str[20];
   int count_alphabet=0;
   int count_digits=0;
   int count_special_character=0;
   printf("Enter the string :");
   fgets(str,20,stdin);
   str[strlen(str)-1]='\0';
   for(int i=0;str[i];i++)
   {
    if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        count_alphabet++;
    else if(str[i]>='1' && str[i]<='9')
        count_digits++;
    else
        count_special_character++;
   }
   printf("Total no. of alphabets in given string => %d\n",count_alphabet);
   printf("Total no. of digits in given string => %d\n",count_digits);
   printf("Total no. of special characters in given string => %d\n",count_special_character);


   return 0;
}
