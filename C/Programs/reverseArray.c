#include <stdio.h>

void reverseArray(int arr[], int length)
{
    for (int i = length - 1; i >= 0; i--)
    {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
}
int main()
{
    int base_number;
    printf("Enter number in the array: ");
    scanf("%d", &base_number);
    int arr[base_number];
    for (int i = 0; i < base_number; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing the element in the array before reverse
    printf("Array before reverse: \n");
    for (int i = 0; i < base_number; i++)
    {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    int length = sizeof(arr) / sizeof(int);
    printf("Array after reverse: \n");

    reverseArray(arr, length);
    return 0;
}