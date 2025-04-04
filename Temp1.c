#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};


void LinkedListTraversal(struct node * ptr){
    while(ptr != NULL){
        printf("Element : %d \n",ptr->data);
        ptr = ptr->next;
    }
}




struct node * InsertAtFirst(struct node* head, int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));

    ptr->data = data;
    ptr->next = head;

    return ptr;
}





struct node * InsertAtIndex(struct node* head, int index, int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    struct node * p = head;
    int i=0;
    while(i != index-1){
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
}



struct node * InsertAfterNode(struct node * head, struct node * prevNode, int data){
    struct node * ptr = (struct node * ) malloc(sizeof(struct node));

    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}


struct node * InsertAtLast(struct node* head, int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    struct node * p = head;
    
    while(p->next != NULL){
        p = p->next;
        
    }

    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;


    
    return head;
}




struct node * deleteAtFirst(struct node * head){
    struct node * ptr = head;

    head = head->next;
    free(ptr);
    return head;
}



struct node * deleteAtIndex(struct node * head, int index){
    struct node * p = head;
    struct node * q = head->next;

    for(int i=0 ;i< index - 1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}



struct node * deleteAtLast(struct node * head){
    struct node * p = head;
    struct node * q = head->next;

    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}




int main() {

    struct node * head;
    struct node * second;
    struct node * third;


    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));



    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next  = third;

    third->data = 13;
    third-> next = NULL;


    
    //  head = InsertAtFirst(head, 56);
    // printf("\n");
    //  LinkedListTraversal(head);




// head = InsertAtIndex(head, 2, 36);
//     printf("\n");
//      LinkedListTraversal(head);



//  head = InsertAtLast(head, 56);
//     printf("\n");
//      LinkedListTraversal(head);


 head = InsertAfterNode(head, second, 56);
    printf("\n");
     LinkedListTraversal(head);


    return 0;
}


