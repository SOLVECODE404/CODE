#include <stdio.h>

void changeValue(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Values before change: %d, %d", a, b);
    changeValue(&a, &b);
    printf("Values after change: %d, %d", a, b);
    return 0;
}