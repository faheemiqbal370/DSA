//  Stack Using Queues
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
} Queue;



Queue* createQueue(int capacity) {
    Queue *queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->size = 0;
    queue->arr = (int*)malloc(capacity * sizeof(int));
    return queue;
}



int isEmpty(Queue *queue) {
    return queue->size == 0;
}



int isFull(Queue *queue) {
    return queue->size == queue->capacity;
}


void enqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue overflow\n");
        return;
    }
    if (queue->front == -1) {
        queue->front = 0;
    }
    queue->arr[++queue->rear] = value;
    queue->size++;
}



int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }
    int value = queue->arr[queue->front++];
    if (queue->front > queue->rear) {
        queue->front = queue->rear = -1; // Reset the queue when empty
    }
    queue->size--;
    return value;
}

// Function to get the front element of the queue
int front(Queue *queue) {
    if (isEmpty(queue)) {
        return -1;
    }
    return queue->arr[queue->front];
}


typedef struct {
    Queue *queue1;
    Queue *queue2;
} Stack;


Stack* createStack(int capacity) {
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->queue1 = createQueue(capacity);
    stack->queue2 = createQueue(capacity);
    return stack;
}


void push(Stack *stack, int value) {
    // Enqueue in queue2
    enqueue(stack->queue2, value);

    // Move all elements from queue1 to queue2 to maintain the stack order
    while (!isEmpty(stack->queue1)) {
        enqueue(stack->queue2, dequeue(stack->queue1));
    }

    // Swap the queues so that queue1 is always the main queue
    Queue *temp = stack->queue1;
    stack->queue1 = stack->queue2;
    stack->queue2 = temp;
}


int pop(Stack *stack) {
    if (isEmpty(stack->queue1)) {
        printf("Stack underflow\n");
        return -1;
    }
    return dequeue(stack->queue1);
}

// Function to get the top element of the stack
int top(Stack *stack) {
    if (isEmpty(stack->queue1)) {
        printf("Stack is empty\n");
        return -1;
    }
    return front(stack->queue1);
}

int main() {
    int capacity = 5;
    Stack *stack = createStack(capacity);

    
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);

    printf("Top element of the stack: %d\n", top(stack));

    printf("Popped element: %d\n", pop(stack));
    printf("Popped element: %d\n", pop(stack));

    printf("Top element of the stack after pops: %d\n", top(stack));

    
    free(stack->queue1->arr);
    free(stack->queue2->arr);
    free(stack->queue1);
    free(stack->queue2);
    free(stack);

    return 0;
}
