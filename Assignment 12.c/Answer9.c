#include<stdio.h>
int main()
{
    int i,j;
    int k;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=7;j++)
        {
            j>4?k--:k++;
            if(j<=5-i || j>=3+i)
                printf(" %d ",k);
            else
                printf("   ");    
        }
        printf("\n");
    }   
    return 0;
}
