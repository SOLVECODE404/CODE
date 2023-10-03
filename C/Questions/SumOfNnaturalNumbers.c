#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    int sum;
    for (int i = 0; i <= base_number; i++)
    {
        printf("%d\n", i);
        sum += i;
    }
    printf("Total: %d", sum);
    return 0;
}