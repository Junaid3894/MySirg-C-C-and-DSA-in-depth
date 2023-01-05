#include<stdio.h>
int main()
{
   int count_vowels=0;
   char str[10];
   printf("Enter the string :");
   scanf("%s",str);
   for(int i=0;str[i];i++)
   {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        count_vowels++;
   }
   printf("Total Vowels in a string is %d",count_vowels);
   return 0;
}
