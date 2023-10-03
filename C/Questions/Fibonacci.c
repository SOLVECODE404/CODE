#include <stdio.h>

void Fibonacci(int number)
{
    int a, b;
    a = 0;
    b = 1;
    for (int i = 0; i <= number; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        if (a < number)
            printf("%d ", c);
        else
            break;
    }
}
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    Fibonacci(base_number);
    return 0;
}