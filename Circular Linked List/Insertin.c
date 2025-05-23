#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

// case 1
 
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

    while(p->next!= head){
        p = p->next;

    }
    p->next = ptr;
    ptr->next = head;
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
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 4;
    head->next = second;
 
    // Link second and third nodes
    second->data = 3;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;

    printf("Circular Linked List before insertion \n");
  linkedListTraversal(head);


 
    // head = insertAtFirst(head, 5);
    // printf("Circular Linked List after insertion \n");
    // linkedListTraversal(head);

    //  head = insertAtIndex(head, 5, 2);
    // printf("Circular Linked List after insertion \n");
    // linkedListTraversal(head);
 
    //   head = insertAtEnd(head, 5);
    // printf("Circular Linked List after insertion \n");
    // linkedListTraversal(head);


     head = insertAfterNode(head, second, 45);
     printf("Circular Linked List after insertion \n");
     linkedListTraversal(head);
 

    return 0;
}
