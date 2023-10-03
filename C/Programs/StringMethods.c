#include <stdio.h>
#include <string.h>
void printString(char stomething[], int length)
{
    for (int i = 0; i <= length; i++)
    {
        printf("%c", stomething[i]);
    }
}
int main()
{
    char myName[] = "Uddeshya Singh";
    char friendName[] = "Aditya Bohra";
    int lengthS1 = strlen(myName);
    printf("Length of first string is: %d\n", lengthS1);
    printString(myName, lengthS1);

    printf("\n");
    return 0;
}