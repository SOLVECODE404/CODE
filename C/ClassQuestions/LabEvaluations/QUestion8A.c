#include <stdio.h>

int main()
{
    char base_character;
    scanf("%c", &base_character);

    switch (base_character)
    {
    case 'a':
        printf("Vowels");
        break;
    case 'e':
        printf("Vowels");
        break;
    case 'i':
        printf("Vowels");
        break;
    case 'o':
        printf("Vowels");
        break;
    case 'u':
        printf("Vowels");
        break;
    default:
        printf("Cons");
    }
}