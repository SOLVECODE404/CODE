#include <stdio.h>

void isPrime(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            count++;
    }
    count == 2 ? printf("Prime number!") : printf("Not prime!");
}
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    isPrime(base_number);
    return 0;
}