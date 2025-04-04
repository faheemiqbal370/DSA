#include<stdio.h>
#include<stdlib.h>


struct Node{
  int data;
  struct Node * next;
};

void linkedListTraversal(struct Node* head){
    struct Node * ptr = head;

    do {
      printf("Element is %d\n", ptr->data);
      ptr = ptr->next;
    }
    while(ptr != head);
    
}


struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}

int main(){
  struct Node * head;
  struct Node * second;
  struct Node * third;
  struct Node * fourth;
  struct Node * fifth;
  struct Node * sixth;
  //  Allocate memory for nodes in the linked list in Heap

  head = (struct Node *) malloc(sizeof(struct Node));
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *) malloc(sizeof(struct Node));
  fourth = (struct Node *) malloc(sizeof(struct Node));
  fifth = (struct Node *) malloc(sizeof(struct Node));
  sixth = (struct Node *) malloc(sizeof(struct Node));
   
  // link first and second node
   head->data = 7;
   head->next = second; 

  // link second and third node
   second->data = 11;
   second->next = third; 

  
   third->data = 66;
   third->next = fourth; 

   fourth->data = 34;
   fourth->next = fifth; 

   fifth->next = sixth; 
   fifth->data = 32;

  // Terminate the list at sixth node
   sixth->data = 06;
   sixth->next = NULL; 

  printf("Circular Linked List before insertion \n");
  linkedListTraversal(head);


 
head = insertAtFirst(head, 5);
printf("Circular Linked List before insertion \n");
linkedListTraversal(head);


  return 0;
}