#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month, year;
    scanf("%d %d", &month, &year);
    int array[12] = {31,
                     29,
                     31,
                     30,
                     31,
                     30,
                     31,
                     31,
                     30,
                     31,
                     30,
                     31};
    int leapArray[12] = {31,
                         29,
                         31,
                         30,
                         31,
                         30,
                         31,
                         31,
                         30,
                         31,
                         30,
                         31};

    int days;
    if (year % 4 == 0)
    {
        for (int i = month; i >= 1; i--)
        {
            days += leapArray[i];
        }
    }
    else
    {
        for (int i = month; i >= 1; i--)
        {
            days += leapArray[i];
        }
    }

    printf("%d", days);
}