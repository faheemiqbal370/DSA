#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};



int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else
    return 0;
}


int isFull(struct stack * ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else
    return 0;
}



void push(struct stack * ptr, int val){
    if (isFull)
    {
        printf("Stack Overflow! \n");
    }

    else {
        ptr->top++;
        ptr->arr[ptr->top] = val;

    }
    
}


int pop(struct stack* ptr ){
    if (isEmpty)
    {
    printf("Stack Underflow \n");
    }

    else{
         int value = ptr->arr[ptr->top];
         ptr->top--;
        return value;
    }
    
}

int peek(struct stack* s, int index){
    int arrayindx = s->top - index + 1;
    if (arrayindx < 0)
    {
        printf("Not a valid Position \n");
        return -1;
    }

    else
     return s->arr[arrayindx];
    
}


int main (){

     struct stack *s = (struct stack *)malloc(sizeof(struct stack));
  s->size = 5;
  s->top = -1;
  s->arr = (int *) malloc(s->size * sizeof(int));


  push(s, 56);
  push(s, 76);
  push(s, 23);
  push(s, 6);
  push(s, 96);        // Pushed five values to stack

  for(int j = 1; j <= s->top + 1; j++){
  printf("The value at position %d is %d \n", j, peek(s, j));
}


  push(s, 54);        // Stack Overflow
  printf("After Pushing, Full %d\n", isFull(s));
  printf("After Pushing, Empty %d\n", isEmpty(s)); 



  printf("Popped %d from the Stack\n", pop(s));               // Last in is First Out





    return 0;
}