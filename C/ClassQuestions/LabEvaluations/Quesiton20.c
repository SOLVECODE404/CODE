#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ARRAY 10

bool insert(int value)
{
}
int main()
{
    printf("1) Insert \n2) Update\n3) Delete\n4) Display\n5) Search\n");
    printf("Enter choice here: ");
    int option;
    scanf("%d", &option);

    typedef int *pointer;
    pointer array;
    array = (pointer)calloc(MAX_ARRAY, sizeof(int));
}