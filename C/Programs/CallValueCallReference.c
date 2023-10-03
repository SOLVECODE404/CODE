#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int numberOne, numberTwo;
    scanf("%d", &numberOne);
    scanf("%d", &numberTwo);
    printf("Number 1: %d, Number 2: %d", numberOne, numberTwo);
    swap(&numberOne, &numberTwo);
    printf("Number 1: %d, Number 2: %d", numberOne, numberTwo);

    return 0;
}