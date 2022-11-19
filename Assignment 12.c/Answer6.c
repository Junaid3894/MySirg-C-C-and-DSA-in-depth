#include<stdio.h>
int main()
{
    int i,j;
    int k;
    int rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        k=64;
        for(j=1;j<=rows+rows-1;j++){
            if(j>=i && j<=rows+rows-i)
            {  
                j>=rows+1?k--:k++;
                printf(" %c ",k);
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
