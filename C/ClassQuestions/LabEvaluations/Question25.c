#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lengthOf(int number)
{
    int length = 0;
    while (number > 0)
    {
        length++;
        number /= 10;
    }
    return length;
}
int sumOfDigits(int number)
{
    if (lengthOf(number) == 1)
    {
        return number;
    }
    else
    {
        return number % 10 + sumOfDigits(number / 10);
    }
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int sum = sumOfDigits(base_number);
    printf("The sum of the digits: %d", sum);
    return 0;
}