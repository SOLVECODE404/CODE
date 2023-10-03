#include <stdio.h>

void halfPyramidPattern(int base)
{
    for (int i = 0; i <= base; i++)
    {
        for (int j = 0; j < i; j++)
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
    halfPyramidPattern(base_number);
    return 0;
}