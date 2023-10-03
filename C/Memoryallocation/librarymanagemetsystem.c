#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_BOOKS 100

// Define a structure to represent a book.
struct Book
{
    char title[100];
    char author[100];
    int ISBN;
};

// Define a stack structure to manage borrowed books.
struct BookStack
{
    struct Book books[MAX_BOOKS];
    int top;
};

// Function to initialize the stack.
void initializeStack(struct BookStack *stack)
{
    stack->top = -1;
}

// Function to push (borrow) a book onto the stack.
bool borrowBook(struct BookStack *stack, struct Book book)
{
    if (stack->top < MAX_BOOKS - 1)
    {
        stack->top++;
        stack->books[stack->top] = book;
        return true; // Successfully borrowed.
    }
    else
    {
        return false; // Stack is full, cannot borrow.
    }
}

// Function to pop (return) a book from the stack.
bool returnBook(struct BookStack *stack, struct Book *returnedBook)
{
    if (stack->top >= 0)
    {
        *returnedBook = stack->books[stack->top];
        stack->top--;
        return true; // Successfully returned.
    }
    else
    {
        return false; // Stack is empty, cannot return.
    }
}

int main()
{
    struct BookStack bookStack;
    initializeStack(&bookStack);

    // Borrow some books.
    struct Book book1 = {"Book1", "Author1", 12345};
    struct Book book2 = {"Book2", "Author2", 67890};
    struct Book book3 = {"Book3", "Author3", 54321};

    if (borrowBook(&bookStack, book1))
    {
        printf("Borrowed: %s\n", book1.title);
    }
    else
    {
        printf("Cannot borrow. Stack is full.\n");
    }

    if (borrowBook(&bookStack, book2))
    {
        printf("Borrowed: %s\n", book2.title);
    }
    else
    {
        printf("Cannot borrow. Stack is full.\n");
    }

    // Return a book.
    struct Book returnedBook;
    if (returnBook(&bookStack, &returnedBook))
    {
        printf("Returned: %s\n", returnedBook.title);
    }
    else
    {
        printf("Cannot return. Stack is empty.\n");
    }

    return 0;
}
