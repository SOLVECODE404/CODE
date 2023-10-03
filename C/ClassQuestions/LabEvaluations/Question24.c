#include <stdio.h>
#include <stdlib.h>

int factorial(int number)
{
    return number == 1 ? number : number * factorial(number - 1);
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int fact = factorial(base_number);
    printf("The factorial of %d is %d\n", base_number, fact);
}