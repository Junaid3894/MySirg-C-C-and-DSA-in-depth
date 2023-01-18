#include<stdio.h>
#include<string.h>
char strupper(char[]);
int main()
{
    char str[20];
    printf("Enter the string :");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    strupper(str);
    printf("%s",str);

   return 0;
}
char strupper(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
}
    
