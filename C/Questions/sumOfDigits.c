#include <stdio.h>

int digits(int number)
{
    int digit;
    while (number > 0)
    {
        digit++;
        number /= 10;
    }
    return digit;
}
void sumOfDigits(int number, int length)
{
    int sum, lastDigit;
    for (int i = 1; i <= length; i++)
    {
        lastDigit = number % 10;
        sum += lastDigit;
        number /= 10;
    }
    printf("Sum of digits is: %d\n", sum);
}
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    int length = digits(base_number);
    printf("%d", length);
    sumOfDigits(base_number, length);
    return 0;
}