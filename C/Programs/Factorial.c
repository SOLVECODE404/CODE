#include <stdio.h>
void factorial(int number)
{
    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("%d\n", factorial);
}
int main()
{
    int base_number;
    scanf("%d", &base_number);
    factorial(base_number);
    return 0;
}