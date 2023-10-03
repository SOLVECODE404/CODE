#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before sway: \n");
    printf("A: %d, B: %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swap: \n");
    printf("A: %d, B: %d\n", a, b);
}