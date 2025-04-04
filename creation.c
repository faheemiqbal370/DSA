#include<stdio.h>
#include<stdlib.h>


struct Node{
  int data;
  struct Node * next;
};


int count = 0;
void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
      printf("Element : %d\n", ptr->data);
    ptr = ptr->next;
    count++;
    }
    printf("The number of nodes in linked list are  %d\n",count);
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


  linkedListTraversal(head);

  return 0;
}