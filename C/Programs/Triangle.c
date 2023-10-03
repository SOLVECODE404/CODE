#include <stdio.h>

void triangel(int number)
{
    for (int i = 0; i <= number; i++)
    {
        for (int j = number - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf(" *");
        }
        printf("\n");
    }
}
int main()
{
    int base_number;
    scanf("%d", &base_number);
    triangel(base_number);
    return 0;
}