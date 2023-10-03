#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name[20];
    for (int i = 0; i < 20; i++)
    {
        name[i] = NULL;
    }
    scanf("%s", name);
    for (int j = 20; j >= 0; j--)
    {
        if (name[j] != NULL)
            printf("%c", name[j]);
    }
}