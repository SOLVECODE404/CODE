#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int circumference(int number)
{
    printf("Radius: %f\n", 2 * M_PI * number);
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    circumference(base_number);
}