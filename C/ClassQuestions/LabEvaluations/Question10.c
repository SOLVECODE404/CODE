#include <stdlib.h>
#include <stdio.h>

int lengthDigit(int number)
{
    int count = 0;
    while (number > 0)
    {
        count++;
        number /= 10;
    }
    return count;
}

int toPower(int x, int n)
{
    int returnVal = x;
    for (int i = 1; i < n; i++)
    {
        returnVal *= x;
    }
    return returnVal;
}

int armstrong(int number, int length)
{
    int temp = number;
    int sum = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        sum += toPower(lastDigit, length);
        number /= 10;
    }
    return sum;
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int lengthOf = lengthDigit(base_number);
    int isArmstrong = armstrong(base_number, lengthOf);

    base_number == isArmstrong ? printf("Armstrong Number\n") : printf("Not Armstrong Number\n");
}