#include <stdio.h>
#include <stdlib.h>

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = a;
    printf("Call By Value => A: %d, B: %d\n", a, b);
}

void callByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Call By Reference => A: %d, B: %d\n", *a, *b);
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number1 = args[1];
    pointer number2 = args[2];
    int numberOne = atoi(number1);
    int numberTwo = atoi(number2);

    callByReference(&numberOne, &numberTwo);
    callByValue(numberOne, numberTwo);
}