#include <stdio.h>

int main()
{

    char operation;
    int numOne, numTwo;

    printf("Enter operation: ");
    printf("+\n -\n *\n /\n");
    scanf("%c", &operation);

    printf("Enter number one: ");
    scanf("%d", &numOne);
    printf("Enter number two: ");
    scanf("%d", &numTwo);
    switch (operation)
    {
    case '+':
        printf("%d\n", numOne + numTwo);
        break;
    case '-':
        printf("%d\n", numOne - numTwo);
        break;
    case '*':
        printf("%d\n", numOne * numTwo);
        break;
    case '/':
        printf("%d\n", numOne / numTwo);
        break;
    default:
        break;
    }
}