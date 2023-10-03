#include <stdio.h>
#include <stdlib.h>

int largest(int a, int b, int c)
{
    if (a > b || a > c)
        return a;
    else if (b > a || b > c)
        return b;
    else
        return c;
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number1 = args[1];
    pointer number2 = args[2];
    pointer number3 = args[3];

    int numberOne = atoi(number1);
    int numberTwo = atoi(number2);
    int numberThree = atoi(number3);
    int lg = largest(numberOne, numberThree, numberThree);
    printf("The largest number is : %d\n", lg);
}