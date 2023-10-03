#include <stdio.h>
#include <stdlib.h>

void takeInput(int *array[], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
}
int main()
{
    int ROW, COLUMN;
    printf("The rows, columns should be the same....");
    printf("Enter rows: ");
    scanf("%d", &ROW);
    printf("Enter column: ");
    scanf("%d", &COLUMN);

    int matrixOne[ROW][COLUMN];
    int matrixTwo[ROW][COLUMN];
    int matrixThree[ROW][COLUMN];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf("Enter matrixOne[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixOne[i][j]);
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf("Enter matrixTwo[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixTwo[i][j]);
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            matrixThree[i][j] = matrixOne[i][j] * matrixTwo[i][j];
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        printf("[");
        for (int j = 0; j < COLUMN; j++)
        {
            printf("%d ", matrixThree[i][j]);
        }
        printf("]");
        printf("\n");
    }
}