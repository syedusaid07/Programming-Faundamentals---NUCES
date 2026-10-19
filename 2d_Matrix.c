#include <stdio.h>
int main() 
{
    int i, j;
    
    int matrix1[3][3] = 
    {
        {6, 4, 8},
        {9, 3, 3},
        {1, 0, 2}
    };

    int matrix2[3][3] = 
    {
        {2, 0, 1},
        {6, 5, 9},
        {3, 5, 6}
    };

    int sum[3][3];
    
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("First Matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("\t%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("\t%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Matrices:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("\t%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}