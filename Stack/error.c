#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

int main() {
    // Allocate memory for the stack
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Push an element to the stack
    s->arr[++(s->top)] = 7;  // Increment top and then assign value

    // Check if the stack is empty
    if (isEmpty(s)) {
        printf("The Stack is empty\n");
    } else {
        printf("The Stack is not empty\n");
    }

    // Free allocated memory
    free(s->arr);
    free(s);

    return 0;
}
