#include<stdio.h>
int main()
{
    int i,j;
    int k;
    int rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        k=65;
        for(j=1;j<=rows;j++){
            if(j>=i)
            printf(" %c ",k++);
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
