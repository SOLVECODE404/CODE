// #include <stdio.h>
// #include <stdlib.h>
// #include<string.h>
// #define MAX 4

// struct stack
// {
//     int size;
//     int top;
//     char **arr; 
// };

// int isempty(struct stack *ptr)
// {
//     if (ptr->top == -1)
//         return 1;
//     else
//         return 0;
// }

// int isfull(struct stack *ptr)
// {
//     if (ptr->top == ptr->size - 1)
//         return 1;
//     else
//         return 0;
// }

// void push(struct stack *ptr, char *str)
// { 
//     if (isfull(ptr))
//         printf("Stack is full\n");
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] =strdup(str);
//     }
// }

// void display(struct stack *ptr)
// {
//     for (int i = 0; i <= ptr->top; i++)
//     {
//         printf("%s ", ptr->arr[i]);
//     }
// }   

// int main()
// {
//     struct stack *s;
//     s = (struct stack *)malloc(sizeof(struct stack));
//     s->size = 4;
//     s->top = -1;
//     s->arr = (char **)malloc(s->size * sizeof(char *)); // Allocate memory for an array of strings
//     // int k;
//     // printf("Enter the number of strings to push onto the stack: ");
//     // scanf("%d", &k);
//     for (int i = 0; i < MAX; i++)
//     {
//         char val[1000];
//         printf("Enter string %d: ", i + 1);
//         scanf("%s",val);
//         push(s, val);
//     }
//     display(s);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int compare(const void *x, const void *y)
// {
//     int a = *(char **)x;
//     int b = *(char **)y;
//     return strcasecmp(a,b);
// }
// int main()
// {
//     char *arr[] = {"java", "Cprogram", "nodesjs", "apple"};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     printf("unsorted Array\n");
//     for (int i = 0; i < length; i++)
//         printf("%s ", arr[i]);
//     qsort(arr, length, sizeof(arr[0]), compare);
//     printf("\nsorted Array\n");
//     for (int i = 0; i < length; i++)
//         printf("%s ", arr[i]);
// }
