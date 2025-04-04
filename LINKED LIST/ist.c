#include<stdio.h>//for input output
#include<stdlib.h>//for malloc

struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head =NULL;
    head=(struct node*)malloc(sizeof(struct node));//we can skip typecasting it  here in c ,as here it is not mandatory to typecaste a void pointer

    head->data=45;
    head->link=NULL;

    printf("%d",head->data);

}