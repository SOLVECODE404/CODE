#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer numberOne = args[2];
    pointer numberTwo = args[3];
    int number1 = atoi(numberOne);
    int number2 = atoi(numberTwo);

    pointer option = args[1];

    if (strcmp(option, "add") == 0)
    {
        printf("Addition: %d\n", number1 + number2);
    }
    if (strcmp(option, "subtract") == 0)
    {
        printf("Subtraction: %d\n", number1 - number2);
    }
    if (strcmp(option, "division") == 0)
    {
        printf("Division: %d\n", number1 / number2);
    }
    if (strcmp(option, "multiplication") == 0)
    {
        printf("Multiplication: %d\n", number1 * number2);
    }
}