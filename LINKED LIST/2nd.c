#include<stdio.h>//for input output
#include<stdlib.h>//for malloc

struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current; //here head link contains address of the 2nd node
    
    
     

    printf("%d\n",head->data);
    printf("%d\n",head->link);

    printf("%d\n",current->data);
    printf("%d\n",current->link);



}