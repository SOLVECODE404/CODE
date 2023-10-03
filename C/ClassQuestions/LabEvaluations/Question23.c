#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, columns;
    printf("Enter rows of the matrix: ");
    scanf("%d", &rows);
    printf("Enter columns of the matrix: ");
    scanf("%d", &columns);

    int matrixOne[rows][columns];
    int matrixTwo[rows][columns];

    int matrixThree[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixOne[i][j]);
        }
    }
    printf("Entered Matrix: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrixOne[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrixOne[j][i]);
        }
        printf("\n");
    }
}