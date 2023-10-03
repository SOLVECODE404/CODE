#include <stdio.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    char *arr[] = {'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight'};

    printf("%s", arr[number + 1]);
}