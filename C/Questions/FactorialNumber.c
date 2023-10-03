#include <stdio.h>

int factorialNumber(int number)
{
    int finalNumber = 1;
    for (int i = 1; i <= number; i++)
    {
        finalNumber *= i;
    }
    return finalNumber;
}
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    int factorial = factorialNumber(base_number);
    printf("Factorial of the number: %d\n", factorial);
    return 0;
}