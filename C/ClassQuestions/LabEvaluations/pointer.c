#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    // int summ = sum(a, b);
    // patternOne(a);
    printf("%d", sum(a, b));
}