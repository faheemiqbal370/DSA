#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node * next;
};

// Traversal of Linked List
void linkedListTraversal(struct Node* ptr){
  while(ptr != NULL){
    printf("Element : %d\n", ptr->data);
    ptr = ptr->next;
  }
}

// case 1
struct Node * insertAtFirst(struct Node * head, int data){
  struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;

  return ptr;
}

// case 2
struct Node * insertatEnd(struct Node *head, int data){
  struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));

  ptr->data = data;
  struct Node * p = head;

  while(p->next != NULL){
    p = p->next;
  }

  p->next = ptr;
  ptr->next = NULL;

  return head;
}

// case 3
struct Node * insertAtIndex(struct Node *head,  int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 1;

    while(i!= index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}


int main(){
  struct Node * head;
  struct Node * second;
  struct Node * third;

  head = (struct Node *) malloc(sizeof(struct Node));
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *) malloc(sizeof(struct Node));


  head->data = 7;
  head->next = second;

  second->data = 5;
  second->next = third;

  third->data = 8;
  third->next = NULL;


printf("Linked List before insertion  \n");
  linkedListTraversal(head);

  // head = insertAtFirst(head, 1);
  // printf("Linked List after insertion  \n");
  // linkedListTraversal(head);


  // head = insertatEnd(head, 9);
  // printf("Linked List after insertion  \n");
  // linkedListTraversal(head);


     head = insertAtIndex(head, 4, 2);
    printf("Linked List after insertion  \n");
    linkedListTraversal(head);








}