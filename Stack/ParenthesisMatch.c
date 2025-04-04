#include<stdio.h>
#include<stdlib.h>

struct stack
{
  int size;
  int top;
  char *arr;
  
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


int parentheseMatch(char * exp){
  struct stack* s;
  s->size = 100;
  s->top = -1;
  s->arr = (char *) malloc(s->size * sizeof(char));

  for(int i=0;i<exp[i]!='\0';i++)
  {
      if(exp[i] == '('){
        push(s,'(');
      }
  

  else if(exp[i] == ')'){
    if(isEmpty(s)){
        return 0;
    }

    pop(s);
  }
}

if(isEmpty(s)){
  return 1;
}
else{
  return 0;
}
}
  


int main(){
  
  char * exp = "8*(9)98)";

  if(parentheseMatch(exp)){
    printf("parenthesis Matches!\n ");
  }
  else{
    printf("parenthesis is not Matching\n ");
  }




  return 0;
}