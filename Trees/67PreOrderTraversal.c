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
  return n;               // Finally returning the created node
  }



  void preOrder(struct node * root){
    if(root != NULL){
      printf("%d \n", root->data);
      preOrder(root->left);
      preOrder(root->right);

    }
  }



int main(){



// Constructing the root node using Functions
  struct node *p  = createNode(4);
  struct node *p1 = createNode(1);
  struct node *p2 = createNode(6);
  struct node *p3 = createNode(5);
  struct node *p4 = createNode(2);

   // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2  


    
  // Linking the root node with left and right children
  p->left = p1;
  p->right = p2;
  p1->left = p3;
  p1->right = p4;



  preOrder(p);




  return 0;
}