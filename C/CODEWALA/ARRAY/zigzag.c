#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int preinpost(int n)
{
    if (n == 0)
        return 1;
    printf("%d", n);
    preinpost(n - 1);
    printf("%d", n);
    preinpost(n - 1);
    printf("%d", n);
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    preinpost(n);
    printf("\n");
}