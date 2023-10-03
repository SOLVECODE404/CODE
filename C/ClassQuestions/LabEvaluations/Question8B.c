#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    if (base_number > 0)
        printf("Positive Number\n");
    else if (base_number == 0)
        printf("Zero\n");
    else
        printf("Negative Number\n");
}