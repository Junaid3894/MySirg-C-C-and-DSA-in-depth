#include<stdio.h>
#include<string.h>
char strreverse(char[],int );
int main()
{
    char str[20];
    int length;
    printf("Enter the string :");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    length=strlen(str);
    strreverse(str,length);
    printf("String After reversed %s",str);
   
   return 0;
}
char strreverse(char str[],int l)
{
    int i;
    for(i=0;i<=l/2;i++)
    {
        char temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
}
