#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack
{
  int size;
  int top;
  char *arr;
  
};

int StackTop(struct stack * s){
  return s->arr[s->top];
}


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
void push(struct stack * ptr, char value){
  if(isFull(ptr)){
    printf("Stack Overflow! cannot push %d to the Stack  \n", value);
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top] = value;
  }
}



char pop(struct stack * ptr){
  if(isEmpty(ptr)){
    printf("Stack Underflow! cannot pop from the stack\n");
    return -1;
  }
  else{
    char value = ptr->arr[ptr->top];
    ptr->top--;
    return value;
 }
}

int prcedence(char ch){
  if(ch == '*' || ch == '/')
  return 3;
  
  else if(ch == '+' || ch  =='-')
  return 2;
  

  else 
  return 0;
  

}

int isOperator(char ch){
  if(ch == '+' || ch == '-' || ch =='*' || ch == '/')
    return 1;
  
  else 
  return 0;
}


char * infixToPostfix(char * infix){
  struct stack * s = (struct stack *) malloc(sizeof(struct stack));


  s->size = 100;
  s->top = -1;
  s->arr = (char *) malloc(s->size * sizeof(char));
  char * postfix = (char *) malloc((strlen(infix) + 1) * sizeof(char));
  int i = 0;                                                                                            // Track infix Traversal
  int j = 0;

  while(infix[i] != '\0'){
    if(!isOperator(infix[i])){
      postfix[j] = infix[i];
      j++;
      i++;
    }
    else{
        if(prcedence(infix[i]) > prcedence(StackTop(s))){
          push(s, infix[i]);
          i++;
        }
        else{
           postfix[j] = pop(s);
           j++;
        }
    }
  }

  while(!isEmpty(s)){
    postfix[j] = pop(s);
    j++;
  }
  postfix[j] = '\0';

  return postfix;


} 
  

int main(){
  char * infix = "x-y/z-k*d";


  printf("Postfix is %s", infixToPostfix(infix));

  return 0;
}





