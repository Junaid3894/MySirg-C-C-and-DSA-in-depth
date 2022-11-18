//1
//21
//321
//4321
#include<stdio.h>
int main()
{
    int i,j;
    int k; // to print the next for every newline
    int rows;
    printf("Enter the rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        k=i;
        for(j=1;j<=rows;j++){
            if(j<=i)
            {
                printf(" %d ",k);
                k--;
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
