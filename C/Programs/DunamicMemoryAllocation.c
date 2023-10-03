#include <stdio.h>
#include <stdlib.h>

void displayArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Value %d: %d\n", i + 1, arr[i]);
    }
}
int main()
{
    // malloc or memory allocation
    typedef int *pointer;
    pointer ptr;
    printf("Enter the size of array: ");
    int length;
    scanf("%d", &length);
    ptr = (pointer)calloc(length, sizeof(int));
    for (int i = 0; i < length; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    displayArray(ptr, length);
    free(ptr);
    return 0;
}