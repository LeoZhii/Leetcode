// valid parentheses
// Leo Zhi
// April 13, 2023

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// define class struct
typedef struct
{
    int end;      // index of last item
    int capacity; // initial capacity
    int *data;    // points to an array
} Stack;

// allocates memory for the stack
Stack *create()
{
    // create a pointer to a stack and allocate memory for it
    Stack *stack = malloc(sizeof(Stack));

    // initialize values for the stack when creating
    stack->end = -1;
    stack->capacity = 5;
    stack->data = malloc(stack->capacity * sizeof(char));
    return stack;
}

void push(Stack *stack, char item)
{
    if (stack->end == stack->capacity)
    {
        // double the capacity
        stack->capacity *= 2;
        stack->data = realloc(stack->data, stack->capacity * sizeof(char));
    }

    // increment the end counter of the stack and add the new character
    stack->data[++stack->end] = item;
}

char pop(Stack *stack)
{
    if (stack->end != -1)
    {
        // return data and decrement end
        return stack->data[stack->end--];
    }

    // if there are no more characters in
    return '\0';
}