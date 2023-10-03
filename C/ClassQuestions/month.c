#include <stdio.h>

int main()
{
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");

        for (k = 1; k <= (rows - i) * 2; k++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("*");

        for (k = 1; k <= (rows - i) * 2; k++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
