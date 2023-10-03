
#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    input = getchar();
    isupper(input) ? printf("%c", tolower(input)) : printf("%c", toupper(input));

    return 0;
}