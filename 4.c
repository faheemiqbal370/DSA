#include<stdio.h>

void inputArray(int arr[],int size){
   printf("Enter elements of array ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

}

int linearSearch(int arr[],int size, int x){
   int flag = 0;
  for(int i=0;i<size;i++){
    
    if(x == arr[i]){
      printf("found at index");
    }
    break;
    flag = 1;
  }
  if(flag==0);
  printf("not found ");
  
  
}

int main(){
  
  printf("Enter number of elements in array ");
  int size,x;
  scanf("%d",&size);
  int arr[size];


 
  inputArray(arr, size);

  printf("Enter number to be searched ");
  scanf("%d ",&x);
  
  linearSearch(arr, size, x);

 
  
  return 0;
}

#include<stdio.h>
int main(){
}

