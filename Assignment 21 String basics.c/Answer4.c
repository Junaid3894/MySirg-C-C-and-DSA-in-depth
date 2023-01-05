#include<stdio.h>
int main()
{
   int count_vowels=0;
   char str[10];
   printf("Enter the string :");
   fgets(str,20,stdin);
   for(int i=0;str[i];i++)
   {
    if(str[i]== 32)
        count_vowels++;
   }
   printf("Total  no. of space in a string are %d",count_vowels);
   return 0;
}
