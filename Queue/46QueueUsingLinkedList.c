#include<stdio.h>
#include<stdlib.h>

struct Node * f = NULL;
struct Node * r = NULL;     // Global Variables

struct Node{
  int data;
  struct Node * next;
};


void linkedListTraversal(struct Node * ptr){
  
  printf("Printing the elements of this LinkedList \n");
  while(ptr != NULL){
    printf("Element: %d \n",ptr->data);
    ptr = ptr->next;
  }
}

void enQueue(int val){
  struct Node *n = (struct Node *) malloc(sizeof(struct Node));

  if(n==NULL){
    printf("Queue is Full");

  }
  else{
    n->data = val;
    n->next = NULL;
    if(f==NULL){
      f=r=n;

    }
    else{
      r->next = n;
      r = n;
    }
  }
}




int deQueue(){
  int val = -1;
  struct Node *ptr = f;

  if(f==NULL){
    printf("Queue is Empty\n");

  }
  else{
   f = f->next;
   val = ptr->data;
   free(ptr);
  }
  return val;
}





int main(){

  
  printf("deQueuing element %d \n", deQueue());

  enQueue(34);
  enQueue(14);
  enQueue(7);

  printf("deQueuing element %d \n", deQueue());

  linkedListTraversal(f);


  return 0;
}