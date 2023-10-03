    // #include <stdio.h>
    // #include <stdlib.h>

    // struct stack
    // {
    //     int size;
    //     int top;
    //     int *arr;
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
    //     if (ptr->top == ptr->size -1)
    //         return 1;
    //     else
    //         return 0;
    // }
    // void push(struct stack* ptr,int val){
    //     if(isfull(ptr))printf("stack is full and %d cant be added\n",val);
    //     else {
    //         ptr->top++;
    //         ptr->arr[ptr->top]=val;
    //     }
    // }

    // int pop(struct stack* ptr){
    //     if(isempty(ptr)){printf("cannot pop as the array is empty\n");return -1;}
    //     else{
    //         int val=ptr->arr[ptr->top];
    //         ptr->top--;
    //         return val;
    //     }
    // }
    // int display(struct stack* ptr){
    //     for(int i=0;i<=ptr->top;i++){
    //         printf("%d ",ptr->arr[i]);
    //     }printf("\n");
    // }
    // int main()
    // {
    //     struct stack *s;
    //     s = (struct stack *)malloc(sizeof(struct stack));
    //     s->size = 10;
    //     s->arr = (int *)malloc(s->size * sizeof(int));
    //     s->top = -1;
    //     printf("before pushing empty:%d\n",isempty(s));
    //     printf("before pushing full:%d\n",isfull(s));
    //     push(s,96);
    //     push(s,96);
    //     push(s,96);
    //     push(s,96);
    //     push(s,16);
    //     push(s,26);
    //     push(s,76);
    //     push(s,66);
    //     push(s,36);
    //     push(s,62);
    //     display(s);
    //     printf("after pushing empty:%d\n", isempty(s));
    //     pop(s);
    //     pop(s);
    //     pop(s);
    //     display(s);
    //     printf("after pushing full:%d\n", isfull(s));
    //     free(s->arr);
    //     free(s);
    //     s = NULL;
    // }

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

    // Define the stack structure
    struct Stack
    {
        int items[MAX_SIZE];
        int top;
    };

    // Initialize the stack
    void initialize(struct Stack *stack)
    {
        stack->top = -1;
    }

    // Check if the stack is empty
    int isEmpty(struct Stack *stack)
    {
        return stack->top == -1;
    }

    // Check if the stack is full
    int isFull(struct Stack *stack)
    {
        return stack->top == MAX_SIZE - 1;
    }

    // Push an element onto the stack
    void push(struct Stack *stack, int value)
    {
        if (isFull(stack))
        {
            printf("Stack overflow\n");
        }
        else
        {
            stack->items[++stack->top] = value;
        }
    }

    // Pop an element from the stack
    int pop(struct Stack *stack)
    {
        if (isEmpty(stack))
        {
            printf("Stack underflow\n");
            return -1; // Return a sentinel value for underflow
        }
        else
        {
            return stack->items[stack->top--];
        }
    }
    int display(struct Stack *stack){
        for(int i=0;i<=stack->top;i++){
            printf("%d ",stack->items[i]);
        }
    }

    int main()
    {
        struct Stack stack;
        initialize(&stack);

        int n, m;

        printf("Enter the number of elements to push (n): ");
        scanf("%d", &n);

        printf("Enter %d elements to push:\n", n);
        for (int i = 0; i < n; i++)
        {
            int value;
            scanf("%d", &value);
            push(&stack, value);
        }

        printf("Enter the number of elements to pop (m): ");
        scanf("%d", &m);

        printf("Popped elements:\n");
        for (int i = 0; i < m; i++)
        {
            int popped = pop(&stack);
        }
        display(&stack);
        return 0;
    }
