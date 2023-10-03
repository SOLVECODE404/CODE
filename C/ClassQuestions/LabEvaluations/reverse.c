#include <stdio.h>

int main()
{
    int number;
    int reverse = 0;
    scanf("%d", &number);
    printf("NUmber: %d\n", number);
    while (number > 0)
    {
        int last_digit = number % 10;
        reverse = (reverse * 10) + last_digit;
        number /= 10;
    }
    printf("Reverse %d: ", reverse);
}