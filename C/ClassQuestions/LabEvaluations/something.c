#include <stdio.h>

int main()
{
    int base_number;
    scanf("%d", &base_number);

    for (int i = 1; i <= 2 * base_number; i += 2)
    {
        for (int j = 1; j <= i; j += 2)
            if (i == 5)
                continue;
            else
                printf("%d ", j);
        if (i != 5)
            printf("\n");
    }
}