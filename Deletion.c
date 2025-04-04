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



// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}


// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}



// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}



// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteByValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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
   sixth->data = 6;
   sixth->next = NULL; 

  printf("Linked List before deletion \n");
  linkedListTraversal(head);


  // head = deleteFirst(head);
  // printf("Linked List after deletion \n");
  // linkedListTraversal(head);

  // head = deleteAtIndex(head, 1);
  // printf("Linked List after deletion \n");
  // linkedListTraversal(head);

  // head = deleteAtLast(head);
  // printf("Linked List after deletion \n");
  // linkedListTraversal(head);

  head = deleteByValue(head, 11);
  printf("Linked List after deletion \n");
  linkedListTraversal(head);

  return 0;
}