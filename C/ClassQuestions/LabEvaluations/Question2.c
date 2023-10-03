#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer numberOne = args[1];
    pointer numberTwo = args[2];
    int number1 = atoi(numberOne);
    int number2 = atoi(numberTwo);

    printf("Sum of two %d and %d : %d\n", number1, number2, number1 + number2);
}