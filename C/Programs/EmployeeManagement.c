#include <stdio.h>
#include <stdlib.h>
void displayAllocation(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: ", i + 1);
        printf("%d", arr[i]);
        printf("\n");
    }
}
int main()
{
    typedef int *pointer;
    pointer employee;
    int base_number;
    printf("Enter number of employee: ");
    scanf("%d", &base_number);
    employee = (pointer)calloc(base_number, sizeof(int));

    for (int i = 0; i < base_number; i++)
    {
        printf("Enter %d: ", i + 1);
        scanf("%d", &employee[i]);
    }
    displayAllocation(employee, base_number);
    printf(" ]");
    return 0;
}