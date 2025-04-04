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




int match(char a, char b){
  if(a =='{' && b =='}'){
    return 1;}


    if(a =='(' && b ==')'){
    return 1;}


    if(a =='[' && b ==']'){
    return 1;}

    return 0;


}


int parentheseMatch(char * exp){
  struct stack* s;
  s->size = 100;
  s->top = -1;
  s->arr = (char *) malloc(s->size * sizeof(char));
  char popped_ch;

  for(int i=0;i<exp[i]!='\0';i++)
  {
      if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
        push(s,exp[i]);
      }
  

  else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
    if(isEmpty(s)){
        return 0;
    }

    popped_ch = pop(s);
    if(!match(popped_ch, exp[i])){
      return 0;
    }
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
  
  char * exp = "8[*(9)(98)";

  if(parentheseMatch(exp)){
    printf("parenthesis Matches!\n ");
  }
  else{
    printf("parenthesis is not Matching\n ");
  }




  return 0;
}