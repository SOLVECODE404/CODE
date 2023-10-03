#include <stdio.h>
#include <stdlib.h>

void countAmt(int number)
{
    int five00 = 0;
    int two00 = 0;
    int hun00 = 0;
    int fifty = 0;
    int ten = 0;

    if (number >= 500)
    {
        five00 = number / 500;
        number -= five00 * 500;
    }
    if (number >= 200)
    {
        two00 = number / 200;
        number -= two00 * 200;
    }
    if (number >= 100)
    {
        hun00 = number / 100;
        number -= hun00 * 100;
    }
    if (number >= 50)
    {
        fifty = number / 50;
        number -= fifty * 50;
    }
    if (number >= 10)
    {
        ten = number / 10;
        number -= ten * 10;
    }

    printf("Five Hundred: %d\n", five00);
    printf("Two Hundred: %d\n", two00);
    printf("Hundred: %d\n", hun00);
    printf("Fifty: %d\n", fifty);
    printf("Ten: %d\n", ten);
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int amount = atoi(number);

    countAmt(amount);
}