#include<stdio.h>
int main()
{
int table;
printf("Enter the table number which you want see :");
scanf("%d",&table);
for(int i=1;i<=10;i++){
    printf("%d x %d = %d\n",table,i,table*i);
}
return 0;
}
