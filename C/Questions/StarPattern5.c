#include <stdio.h>

int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    for (int i = 0; i < base_number; i++)
    {
        for (int j = 0; j < base_number; j++)
        {
            if (i == 0 || j == 0 || i == base_number - 1 || j == base_number - 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}