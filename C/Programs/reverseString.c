// Make a program that takes user input and reverse the string given

#include <stdio.h>
#include <string.h>

void reverseString(char string[], int length)
{
    for (int i = length; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
}
int main()
{
    char usrInput[100];
    scanf("%s", usrInput);
    reverseString(usrInput, strlen(usrInput));
    printf("\n");
    return 0;
}