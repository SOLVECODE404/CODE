#include <stdio.h>
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    for (int i = 1; i <= base_number; i++)
    {
        if (base_number % i == 0)
            printf("%d\n", i);
    }
    return 0;
}