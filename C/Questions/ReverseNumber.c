#include <stdio.h>

int reverseNumber(int number)
{
    int revNumber;
    while (number > 0)
    {
        int last_digit = number % 10;
        revNumber = (revNumber * 10) + last_digit;
        number /= 10;
    }
    return revNumber;
}
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    int reverse_number = reverseNumber(base_number);
    printf("Reverse Number: %d\n", reverse_number);
    return 0;
}