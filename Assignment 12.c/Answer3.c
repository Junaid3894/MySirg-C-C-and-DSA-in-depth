#include<stdio.h>
int main()
{
    int i,j;
    int k;
    int rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows+rows;j++){
            if(j>=rows+1-i && j<=rows)
            {
                printf(" *    ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
