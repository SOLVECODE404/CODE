#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            count++;
    }
    return count == 2 ? true : false;
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = 1; i <= base_number; i++)
    {
        bool rec = isPrime(i);
        if (rec == true)
            printf("%d\n", i);
    }
}