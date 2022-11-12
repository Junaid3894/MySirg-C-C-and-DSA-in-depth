#include<stdio.h>
int main()
{
int a,b;
int l,i;
printf("Enter the two number to find its LCM :");
scanf("%d %d",&a,&b);
l=a>b?a:b; 
for(l;l<a*b;l+=a>b?a:b){
    if(l%a==0 && l%b==0){
        printf("LCM is %d",l);
        break;
    }
}
return 0;
}
