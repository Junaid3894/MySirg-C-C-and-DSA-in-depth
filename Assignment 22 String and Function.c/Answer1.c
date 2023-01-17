#include<stdio.h>
#include<string.h>
char strlength(char[]);
int main()
{
    char str[20];
    int length=0;
    printf("Enter the string :");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    length=strlength(str);
    printf("Length of string is %d",length);
   
   return 0;
}
char strlength(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}
