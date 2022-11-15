#include<stdio.h>
int main()
{
    int i,j;
    int rows;
    printf("Enter the rows :");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if(j<=6-i)
            printf(" * ");
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
