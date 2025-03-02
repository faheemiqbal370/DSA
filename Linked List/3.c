#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node * next;
};

void linkedListTraversal(struct Node* ptr){
  while(ptr != NULL){
    printf("Element : %d\n", ptr->data);
    ptr = ptr->next;
  }
}



// case 1: Deleting thr first element 

struct Node * deleteFirst(struct Node *head){
  struct Node * ptr = head;
  head = head->next;
  free(ptr);
  return head;
}

// case 2: Deleting the element at given index
struct Node * deleteAtIndex(struct Node *head, int index){
struct Node *p = head;
struct Node *q = head->next;
for(int i = 0; i< index - 1; i++){
  p = p->next;
  q = q->next;
}

p->next = q->next;
free(q);
return head;
}

// case 3: Deleting last element
struct Node * deleteAtLast(struct Node * head){
  struct Node * p = head;
  struct Node * q = head->next;

  while(q->next != NULL){
    p = p->next;
    q = q->next;
  } 
  p->next = NULL;
  free(q);
  return head;
}

// case 4: Deleting element with a given value

struct Node * deleteByValue(struct Node * head, int value){
   struct Node * p = head;
   struct Node * q = head->next;

  // while(q->data != value && q->next != NULL){
  //   p = p->next;
  //   q = q->next;
  // }

  Search(head,value);

  if(q->data == value){
    p->next = q->next;
    free(q);

  }

  return head;
}



 int Search(struct Node * head, int value){
    struct Node * p = head;
  struct Node * q = head->next;

  while(q->data != value && q->next != NULL){
    p = p->next;
    q = q->next;
  }

  if(q->data == value){
      return q->data;
  }
}


int main(){


  struct Node * head;
  struct Node * second;
  struct Node * third;
  struct Node * fourth;



  head = (struct Node *) malloc(sizeof(struct Node));
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *) malloc(sizeof(struct Node));
  fourth = (struct Node *) malloc(sizeof(struct Node));


  head->data = 7;
  head->next = second;

  second->data = 5;
  second->next = third;

  third->data = 2;
  third->next = fourth;

  fourth->data = 1;
  fourth->next = NULL;

  printf("Linked List before deletion \n");
  linkedListTraversal(head);

  printf("Linked List before deletion \n");

  // head = deleteFirst(head);
  // linkedListTraversal(head);



  // head = deleteAtIndex(head, 1);
  // linkedListTraversal(head);


  // head = deleteAtLast(head);
  // linkedListTraversal(head);

  head = deleteByValue(head, 2);
  linkedListTraversal(head);





  return 0;
}



