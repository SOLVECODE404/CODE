#include <stdio.h>

void printString(char somethig[])
{
    int i = 0;
    while (somethig[i] != '\0')
    {
        printf("%c\n", somethig[i]);
        i++;
    }
}
int main()
{
    char name[30];
    scanf("%s[^/n]", name);
    printString(name);
    return 0;
}