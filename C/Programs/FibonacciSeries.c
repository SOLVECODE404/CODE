#include <stdio.h>
void fibonacci(int nth)
{
    int a = 0;
    int b = 1;
    int arr[nth];
    for (int i = 0; i < nth; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        if (a < nth)
        {
            printf("%d\n", a);
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int base_number;
    printf("Enter Nth term: ");
    scanf("%d", &base_number);
    fibonacci(base_number);
    return 0;
}