#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swap: \n");
    printf("A: %d, B: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: \n");
    printf("A: %d, B: %d\n", a, b);
}