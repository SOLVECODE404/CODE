#include <stdio.h>

void reverseHalfPyramid(int number)
{
    for (int i = 0; i <= number; i++)
    {
        for (int j = number - i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int base_number;
    scanf("%d", &base_number);
    reverseHalfPyramid(base_number);
    return 0;
}