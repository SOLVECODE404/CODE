#include <stdio.h>

int main()
{
    int base_number;
    printf("Enter number of elements: ");
    scanf("%d", &base_number);
    int base_array[base_number];
    for (int i = 0; i < base_number; ++i)
    {
        printf("Enter element: ");
        scanf("%d", &base_array[i]);
    }

    for (int i = 0; i < sizeof(base_array) / sizeof(int); i++)
    {
        printf("%d\n", base_array[i]);
    }

    return 0;
}