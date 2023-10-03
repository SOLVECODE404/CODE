#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n, i, j, m, sum = 0, p, q, r, s, cnt = 1;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (i=n-1; i>=0; i--)
            {
                printf("%d ", a[i][j]);
            }
        }
        else {
            for (i=0;i<n;i++){
                    printf("%d ",a[i][j]);
                }
            }
        printf("\n");
        }
    }
