#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[10];
    scanf("%s", a);
    int n = strlen(a);
    int i, j;
    for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
        if (a[i] != a[j])
        {
            printf("not palindrome string");
            return 0;
        }
    printf("palin");
}