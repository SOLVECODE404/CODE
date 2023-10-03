#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
    typedef char *char_pointer;
    typedef char *int_pointer;
    char_pointer operation = argv[1];
    int_pointer numberOne = argv[2];
    int_pointer numberTwo = argv[3];

    int number1 = atoi(numberOne);
    int number2 = atoi(numberTwo);

    if (strcmp(operation, "add") == 0)
        printf("%d\n", number1 + number2);
    else if (strcmp(operation, "subtract") == 0)
        printf("%d\n", number1 - number2);
    else if (strcmp(operation, "multiplication") == 0)
        printf("%d\n", number1 * number2);
    else if (strcmp(operation, "divide") == 0)
        printf("%d\n", number1 / number2);
    else
        printf("Please enter a valid operation!\n");
}