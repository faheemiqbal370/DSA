#include<stdio.h>

void printArray(int* A, int n){
  for(int i = 0; i < n; i++){
    printf("%d ",A[i]);
  }
  printf("\n");
}

void bubbleSortAdaptive(int* B, int n){
  int temp;
  int isSorted = 0;

  for(int i = 0; i < n-1; i++){           // For passes
    printf("Working on pass Number %d\n", i+1);
    isSorted = 1;
    for(int j = 0; j < n-1-i; j++){          // For swaps
      
      if(B[j] > B[j+1]){
        temp = B[j];
        B[j] = B[j+1];
        B[j+1] = temp;
        isSorted = 0;
      }
    }
    if(isSorted){
      return;
    }
  }
}


void bubbleSort(int* A, int n){
  int temp;


  for(int i = 0; i < n-1; i++){           // For passes
    for(int j = 0; j < n-1-i; j++){          // For swaps
      
      if(A[j] > A[j+1]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}

int main(){
  int A[] = {12, 54, 65, 7, 23, 9};       // Bubble Sort

  int B[] = {1, 2, 3, 4, 5, 6};                // BubbleSortAdaptive(already in order)

  int n = 6;

  printArray(A, n);                                           // Before bubbleSort  

  bubbleSort(A,n);

  printArray(A, n);

  bubbleSortAdaptive(B,n);

  printArray(B, n);

  return 0;
}