#include<stdio.h>

void inputArray(int arr[],int size){
   printf("Enter elements of array ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

}

void displayArray(int arr[],int size){
   printf("The elements of array are ");
  for(int i=0;i<size;i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(){
  
  printf("Enter number of elements in array ");
  int size;
  scanf("%d",&size);
  int arr[size];

 
  inputArray(arr, size);
  displayArray(arr, size);

 
  
  return 0;
}



