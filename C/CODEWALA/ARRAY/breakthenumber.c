#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[n], dig[i], j, temp;
    printf("enter the no:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        temp = n % 10;
        dig[i] = temp;
        i++;
        n /= 10;
    }
    for (j = i - 1; j > 1; j--)
    {
        printf("%d\t", dig[i]);
    }
}