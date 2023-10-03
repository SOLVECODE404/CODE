#include <stdio.h>
#include <string.h>

int main()
{

    char base_string[30];
    scanf("%s", base_string);
    int len = strlen(base_string);
    char reveres_string[30];
    int j = len - 1;
    for (int i = 0; i < len; i++)
    {
        reveres_string[i] = base_string[j];
        j--;
    }
    printf("Final String: ");
    for (int k = 0; k < len; k++)
    {
        printf("%c", reveres_string[k]);
    }
    printf("\n");
}