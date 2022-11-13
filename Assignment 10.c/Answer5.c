#include<stdio.h>
int main()
{
int a,b;
int c;
printf("Enter the two number to find its pair is co prime or not :");
scanf("%d %d",&a,&b);
for(c=a>b?a:b;c>1;c--)
{
if(a%c==0 && b%c==0)
{
    printf("This pair not a co prime number ");
    break;
}

}
if(c==1)
{
    printf("Yes it is co prime");
}

return 0;
}
