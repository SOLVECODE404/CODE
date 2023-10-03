#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int number)
{
    int reverse = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        reverse = (reverse * 10) + lastDigit;
        number /= 10;
    }
    return reverse;
}

int lengthOf(int number)
{
    int count = 0;
    while (number > 0)
    {
        count++;
        number /= 10;
    }
    return count;
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int len = lengthOf(base_number);
    int reverse = reverseNumber(base_number);

    printf("Reverse: %d, Length: %d\n", reverse, len);
}