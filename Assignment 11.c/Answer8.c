#include<stdio.h>
int main()
{
    int i,j;
    int k=1;
    int rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if(j<=i)
            printf(" %d ",k++);
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
