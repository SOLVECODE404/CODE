#include <stdio.h>

int main()
{
    // Pointer is a special type of variable which stores address of another variable;
    int base_number = 44;
    int *base_numberPointer = &base_number;
    printf("The value of base_number is: %d", &base_numberPointer);
    return 0;
}