#include <stdio.h>
#include <stdlib.h>

void takeInput(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void sum(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    printf("The sum of the array is %d\n", sum);
}
int main()
{
    int arrLength;
    printf("Enter the length of the array: ");
    scanf("%d", &arrLength);

    typedef int *pointer;
    pointer array;
    array = (pointer)calloc(arrLength, sizeof(int));

    takeInput(array, arrLength);

    sum(array, arrLength);
}