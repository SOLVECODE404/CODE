#include <stdlib.h>
#include <stdio.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int sum = 0;
    while (base_number >= 0)
    {
        sum += base_number;
        base_number--;
    }
    printf("Sum of n natural numbers: %d\n", sum);
}