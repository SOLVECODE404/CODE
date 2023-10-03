#include <stdio.h>
#include <stdlib.h>

int digits(int number)
{
    int count = 0;
    while (number > 0)
    {
        count++;
        number /= 10;
    }
    return count;
}

void perfect_number(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }
    number == sum ? printf("Perfect number\n") : printf("Not Perfect Number\n");
}

int powerOf(int number, int power)
{
    int sum = number;
    for (int i = 1; i < power; i++)
    {
        sum *= number;
    }
    return sum;
}
void armstrong(int number, int length)
{
    int reverse = 0;
    int temp = number;
    int sum = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        sum += powerOf(lastDigit, length);
        number /= 10;
    }

    temp == sum ? printf("Armstrong number\n") : printf("Not Armstrong Number\n");
}

int primeNumber(int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i != 0)
            continue;
        else
            return 1;
    }
    return 0;
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int len = digits(base_number);
    armstrong(base_number, len);
    perfect_number(base_number);

    int rec = primeNumber(base_number);
    rec == 0 ? printf("Prime number\n") : printf("Not Prime Number\n");
}