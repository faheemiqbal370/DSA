#include<stdio.h>
#include<stdlib.h>


struct node{
  int data;
  struct node* left;
  struct node* right;
};


struct node * createNode(int data){
  struct node *n;       // Creating a node ponter
  n = (struct node *) malloc(sizeof(struct node));      // Allocating memory in the heap
  n->data = data;        // Setting thr data
  n->left = NULL;         // Setting the left and right children to NULL  
  n->right = NULL; 
  return n;       // Finally returning the created node
  


}



int main(){

  /*

  // Constructing the root node 
  struct node *p;
  p = (struct node *) malloc(sizeof(struct node));
  p->data = 2;
  p->left = NULL;
  p->right = NULL;

 // Constructing the second node
   struct node *p1;
  p1 = (struct node *) malloc(sizeof(struct node));
  p->data = 1;  
  p1->left = NULL;
  p1->right = NULL;

 // Constructing the third node
  struct node *p2;
  p2 = (struct node *) malloc(sizeof(struct node));
  p->data = 4; 
  p2->left = NULL;
  p2->right = NULL;

  // Linking the root node with left and right children

  p2->left = p1;
  p2->right = p2;

*/

// Constructing the root node using Functions
  struct node *p = createNode(2);

  struct node *p1 = createNode(1);

  struct node *p2 = createNode(4);

    
  // Linking the root node with left and right children
  p2->left = p1;
  p2->right = p2;




  return 0;
}