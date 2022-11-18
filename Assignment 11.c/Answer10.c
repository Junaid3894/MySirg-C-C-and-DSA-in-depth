#include<stdio.h>
int main()
{
    int i,j;
    int k;
    int rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows+1;j++){
            if(i==1  || i==5){
                printf(" * ");
            }
            else if (i>=2 && i<=4)
            {
                if(j==1 || j==6)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
        
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
