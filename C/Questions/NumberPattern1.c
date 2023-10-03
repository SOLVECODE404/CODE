#include <stdio.h>

int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    for (int i = 0; i < base_number; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int k = 0; k < base_number - i; k++)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}