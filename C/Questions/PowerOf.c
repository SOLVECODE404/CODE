#include <stdio.h>

int power(int number, int powerOf)
{
    int answer = 1;
    for (int i = 1; i <= powerOf; i++)
    {
        answer *= number;
    }
    return answer;
}
int main()
{
    int base_number;
    int base_power;
    printf("Enter number and power in same line: ");
    scanf("%d %d", &base_number, &base_power);
    int powerAns = power(base_number, base_power);
    printf("%d to the power of %d is: %d\n", base_number, base_power, powerAns);
    return 0;
}