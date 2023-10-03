#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base_number;
    printf("Enter size of array:  ");
    scanf("%d", &base_number);
    typedef int *pointer;
    pointer array;
    array = (pointer)calloc(base_number, sizeof(int));
    int odd, even;
    for (int i = 0; i < base_number; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < base_number; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Odd: %d, Even: %d\n", odd, even);
    return 0;
}