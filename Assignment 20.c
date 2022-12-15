/*Write a program to calculate sum of two matrices each of order 3 x 3*/
#include <stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int sum_arr[3][3]; // for intialize sum of two matrices
    // Taking input value elemnts for arr1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d column value of %d row :", j + 1, i + 1);
            scanf("%d", &arr1[i][j]);
        }
    }
    // Taking input value elemnts for arr2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d column value of %d row :", j + 1, i + 1);
            scanf("%d", &arr2[i][j]);
        }
    }
    // Lofic to sum of arr1 and arr2
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            sum_arr[i][j]=arr1[i][j] + arr2[i][j];
        }
    }
    // finally print the sum of two matrices
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",sum_arr[i][j]);
        }
        printf("\n");
    }
        return 0;
}
