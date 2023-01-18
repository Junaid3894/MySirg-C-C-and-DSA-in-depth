#include<stdio.h>
#include<string.h>
char strlower(char[]);
int main()
{
    char str[20];
    printf("Enter the string :");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    strlower(str);
    printf("%s",str);

   return 0;
}
char strlower(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {

        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
}
    
