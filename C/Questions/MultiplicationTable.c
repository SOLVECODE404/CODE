#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", base_number, i, base_number * i);
    }
    return 0;
}