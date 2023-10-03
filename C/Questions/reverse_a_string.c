#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[10];
    gets(a);
    int len = 0;
    char temp;
    int i;
    while (a[len] != '\0')
    {
        len++;
    }
    printf("the length of the string is %d\n:", len);
    for (i=0;i<len;i++){
    if (a[i] == ' ')
    {
        printf("ERROR");
    }
    else
    {
        for (i = 0; i < ((len - 1) / 2); i++)
        {
            temp = a[i];
            a[i] = a[len - 1 - i];
            a[len - 1 - i] = temp;
        }
        printf("the reverse of string is %s\n", a);
        return 0;
    }}
}