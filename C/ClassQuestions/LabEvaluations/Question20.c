#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 10

void insert(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter element: %d", i + 1);
        scanf("%d", &array[i]);
    }
}

void display(int array[], int length)
{
    printf("Entered Array: ");
    printf("[");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("]\n");
}

void update(int array[], int index, int value)
{
    if (index > STACK_SIZE)
    {
        printf("Enter index below the stack size.");
        return;
    }
    array[index] = value;
}
void delete(int array[], int value)
{
    if (value > STACK_SIZE)
    {
        printf("Enter index below the stack size.");
        return;
    }
    array[value] = 0;
}
int search(int array[], int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}
int main()
{

    typedef int *pointer;
    pointer array;
    array = (pointer)calloc(STACK_SIZE, sizeof(int));

    while (true)
    {
        printf("1) Insert\n2) Update\n3) Delete\n4) Display\n5) Search\n");
        printf("Enter choice: ");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            insert(array, STACK_SIZE);
            display(array, STACK_SIZE);
        }
        else if (choice == 2)
        {
            display(array, STACK_SIZE);
            printf("Enter idex to update: ");
            int index, value;
            scanf("%d", &index);
            printf("Enter value to replace with: ");
            scanf("%d", &value);
            update(array, index, value);
        }
        else if (choice == 3)
        {
            display(array, STACK_SIZE);
            int value;
            printf("Enter index of what you want to delete: ");
            scanf("%d", &value);
            delete (array, value);
        }
        else if (choice == 4)
            display(array, STACK_SIZE);
        else if (choice == 5)
        {
            int value;
            printf("Enter what you want to search for: ");
            scanf("%d", &value);
            int rec = search(array, STACK_SIZE, value);
            rec == -1 ? printf("The element dose not exist in the array.\n") : printf("The element exist at the index of: %d", rec);
        }
        else
            printf("Enter valid choice value...\n");
    }
}