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
 
 // case 1
struct Node * insertAtFirst(struct Node *head,  int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
   
    return ptr;
}



// case 2
struct Node * insertAtIndex(struct Node *head,  int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while(i!= index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}

// case 3
struct Node * insertAtEnd(struct Node *head,  int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;


    struct Node * p = head;

    while(p->next!= NULL){
        p = p->next;

    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
   
}


// case 4
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode,  int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;


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

  printf("Linked List before Insertion \n");
  linkedListTraversal(head);


//   head = insertAtFirst(head, 56);
//   printf("\n");
//   linkedListTraversal(head);

//  printf(("\n"));
//  head = insertAtIndex(head, 56, 1);
//  linkedListTraversal(head);

  printf("Linked List after Insertion \n");
//   head = insertAtEnd(head, 56);
//   linkedListTraversal(head);


  head = insertAfterNode(head, second, 45);
  linkedListTraversal(head);

  return 0;
}