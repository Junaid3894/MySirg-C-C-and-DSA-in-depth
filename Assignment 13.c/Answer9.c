#include<stdio.h>
int main()
{
    char c;
    printf("Enter charcter :");
    scanf("%c",&c);
    switch(c)
    {
       case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E':  case 'I': case 'O': case 'U':
       printf("Vowel");
       break;
       case 'b' ... 'd': case 'f'... 'h': case 'v' ... 'z': case 'j' ... 'n':
       case 'B' ... 'D': case 'F'... 'H': case 'V' ... 'Z': case 'J' ... 'N':
       printf("Consonants");
       break;

       default:
       printf("Some other special charactes"); 
    }
    return 0;
}
