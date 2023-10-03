// Find the average of an array

#include <stdio.h>
int arrayAvg(int arr[], int length)
{
    int sum;
    for (int i = 0; i <= length; i++)
    {
        sum += arr[i];
    }
    float average = sum / length;
    return average;
}

int main()
{
    int base_number;
    printf("What are the number of items you want in the array?: \n");
    scanf("%d", &base_number);
    int marks[base_number];
    for (int i = 0; i < base_number; i++)
    {
        scanf("%d", &marks[i]);
    }
    float lenofArray = sizeof(marks) / sizeof(int);
    int rec = arrayAvg(marks, lenofArray);
    printf("The average of the array is: %d\n", rec);

    return 0;
}