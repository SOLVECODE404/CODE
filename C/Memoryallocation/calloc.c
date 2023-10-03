#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of:");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}