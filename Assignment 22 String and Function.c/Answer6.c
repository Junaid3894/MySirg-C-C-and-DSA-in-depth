#include<stdio.h>
#include<string.h>
char strvowels(char[]);
int main()
{
    char str[20];
    int no_vowels;
    printf("Enter the string :");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    no_vowels= strvowels(str);
    printf("Total Vowels = %d",no_vowels);
   return 0;
}
char strvowels(char str[])
{
    int i;
    int count=0;
    char v[]="AEIOUaeiou";
    for(i=0;str[i];i++)
    {
        for(int j=0;v[j];j++)
            if(v[j]==str[i])
            {
                count++;
               break;
            }
    }
    return count;
}
    
