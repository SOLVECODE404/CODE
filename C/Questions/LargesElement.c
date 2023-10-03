#include <stdio.h>
#include <stdlib.h>

int maxArray(int arr[], int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    typedef int *pointer;
    pointer array;
    int base_number;
    printf("Enter length of array: ");
    scanf("%d", &base_number);
    array = (pointer)calloc(base_number, sizeof(int));
    for (int i = 0; i < base_number; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int maxNumber = maxArray(array, base_number);
    printf("Largest number in the array is: %d", maxNumber);
    return 0;
}