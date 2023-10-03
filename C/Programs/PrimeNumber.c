#include <stdio.h>
#include <stdlib.h>
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

    bool primeNumber = isPrime(base_number);
    primeNumber ? printf("Is Prime Number. \n") : printf("Not a Prime Number. \n");
}