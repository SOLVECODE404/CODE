#include <stdio.h>
#include <stdlib.h>

void nextGreaterElements(int *nums, int numsSize, int *result)
{
    int *stack = (int *)malloc(numsSize * sizeof(int));
    int stackSize = 0;

    for (int i = numsSize - 1; i >= 0; i--)
    {
        while (stackSize > 0 && nums[i] >= stack[stackSize - 1])
        {
            stackSize--;
        }

        if (stackSize > 0)
        {
            result[i] = stack[stackSize - 1];
        }
        else
        {
            result[i] = -1;
        }

        stack[stackSize] = nums[i];
        stackSize++;
    }

    free(stack);
}

int main()
{
    int input[] = {4, 5, 2, 10, 8};
    int inputSize = sizeof(input) / sizeof(input[0]);
    int *output = (int *)malloc(inputSize * sizeof(int));

    nextGreaterElements(input, inputSize, output);

    printf("Next greater elements: ");
    for (int i = 0; i < inputSize; i++)
    {
        printf("%d ", output[i]);
    }
    printf("\n");

    free(output);

    return 0;
}
