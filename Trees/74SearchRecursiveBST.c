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



  void preOrder(struct node * root){
    if(root != NULL){
      printf("%d \n", root->data);
      preOrder(root->left);
      preOrder(root->right);

    }
  }


  int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root != NULL){
        if(!isBST(root->left)){
          return 0;
        }
        if(prev != NULL && root->data <= prev->data){
          return 0;
        }
        prev = root;
        return isBST(root->right);
      }
    else {
      return 1;
    }
}



struct node * search(struct node* root, int key){
  if(root == NULL){
    return NULL;
  }
if(key == root->data){
  return root;
}
else if(key < root->data){
  return search(root->left, key);
}

else{
  return search(root->right, key);   
}
}

int main(){



// Constructing the root node using Functions
  struct node *p  = createNode(5);
  struct node *p1 = createNode(3);
  struct node *p2 = createNode(6);
  struct node *p3 = createNode(1);
  struct node *p4 = createNode(4);

   // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4 


    
  // Linking the root node with left and right children
  p->left = p1;
  p->right = p2;
  p1->left = p3;
  p1->right = p4;


  struct node* n = search(p,10);
  if(n!=NULL)
  {printf("Element Found : %d",n->data);
  }

  else
  {printf("Element Not Found");
  }
  return 0;
}