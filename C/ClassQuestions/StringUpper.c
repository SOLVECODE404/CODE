#include <stdio.h>
#include <ctype.h>

void printArray(char array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");
}
int main()
{
    char input[20];
    scanf("%s", input);

    printf("Initial thing: ");
    printArray(input, 20);
    for (int i = 0; i < 20; i++)
    {
        if (islower(input[i]))
            input[i] = toupper(input[i]);
        else
            input[i] = tolower(input[i]);
    }
    printf("After conversion: ");
    printArray(input, 20);
}