#include <stdio.h>

int main()
{
    int grade;
    printf("Enter grade: ");
    scanf("%d", &grade);
    int option = 0;
    if (100 >= grade >= 90)
        option = 1;
    else if (90 >= grade >= 80)
        option = 2;
    else if (80 >= grade >= 70)
        option = 3;
    else if (70 >= grade >= 60)
        option = 4;
    else if (50 >= grade >= 50)
        option = 5;

    printf("%d", option);
    switch (option)
    {
    case 1:
        printf("A");
        break;
    case 2:
        printf("B");
        break;
    case 3:
        printf("C");
        break;
    case 4:
        printf("D");
        break;
    case 5:
        printf("E");
    default:
        printf("Nothing");
        break;
    }
}