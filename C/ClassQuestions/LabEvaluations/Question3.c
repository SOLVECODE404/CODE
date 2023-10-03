#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float circum(int a)
{
    return 2 * M_PI * a;
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    float circumference = circum(base_number);
    printf("Circumference of the circle is: %f\n", circumference);
}
