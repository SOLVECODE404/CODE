#include <stdio.h>

int intDigits(int number)
{
    int digits;
    while (number > 0)
    {
        digits++;
        number /= 10;
    }
    return digits;
}
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    int length = intDigits(base_number);
    printf("Number of digits in the int is: %d\n", length);
    return 0;
}