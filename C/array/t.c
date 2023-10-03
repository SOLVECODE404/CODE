#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        int flag = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag=1;
            }
        }
        if (flag==0){printf("%d ",a[i]);}
    }
}
