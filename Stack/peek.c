#include<stdio.h>
#include<stdlib.h>

struct stack
{
  int size;
  int top;
  int *arr;
  
};

int isEmpty(struct stack *ptr){
  if(ptr->top == -1){
    return 1;
  }
  else{
    return 0;
  }
}


int isFull(struct stack *ptr){
  if(ptr->top == ptr->size-1){
    return 1;
  }

else{
  return 0;
}
}

void push(struct stack * ptr, int value){
  if(isFull(ptr)){
    printf("Stack Overflow! cannot push %d to the Stack  \n", value);
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top] = value;
  }
}



int pop(struct stack * ptr){
  if(isEmpty(ptr)){
    printf("Stack Underflow! cannot pop from the stack\n");
    return -1;
  }
  else{
    int value = ptr->arr[ptr->top];
    ptr->top--;
    return value;
 }
}



int peek(struct stack * s, int index){
  int arrayInd = s->top - index + 1;
  if(arrayInd <0){
    printf("Not a valid position for the stack \n");
    return -1;
  }
  else{
    return s->arr[arrayInd];
  }
}




int main(){
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
 


  return 0;
}
