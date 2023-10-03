#include <stdlib.h>
#include <stdio.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int a = 1;
    int b = 1;
    printf("Element 1: 0\n");
    for (int i = 1; i < base_number; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("Element %d: %d\n", i + 1, a);
    }
}