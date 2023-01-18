#include<stdio.h>
#include<string.h>
char strcmpare(char[],char[]);
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the  1st string :");
    fgets(str1,20,stdin);
    str1[strlen(str1)-1]='\0';
    printf("Enter the  2nd string :");
    fgets(str2,20,stdin);
    printf("%d",strcmpare(str1,str2));

   return 0;
}
char strcmpare(char str1[], char str2[])
{
    int i;
    for(i=0;str1[i] && str2[i];i++)
        if(str1[i]!=str2[i])
            break;
    return str1[i]-str2[i];
}
    
