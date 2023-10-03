#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void main()
{
    int n, i, j;
    char a[20];
    gets(a);
    for (i = 0; a[i]; i++)
    {
        if (((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')))
        {
            for (j = i; a[j]; j++)
                a[j] = a[j + 1];
            i--;
        }
    }
    printf("%s", a);
}   