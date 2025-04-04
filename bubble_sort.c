#include<stdio.h>
#include<stdlib.h>

void printarray(int A[], int n){
    for(int i =0;i<=n;i++){
        printf("%d",A[i]);
    }
}

void bubblesort(int A[],int n){
    for (int i = 0; i < n-1; i++)
    {
        
    }
    
}

int main(){
    int A[]={12,33,5,4,6,22,55};
    int n = 6;
    printarray(A,n);

    bubblesort(A,n);
    printarray(A,n);
    return 0;
}