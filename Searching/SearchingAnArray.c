#include<stdio.h>

int main(){

int arr[7] = {5, 9, 8, 6, 3, 11, 14};
int size = 7;
int key;
printf("Enter the element you want to searh in the array : \n");
scanf("%d",&key);
int flag = 0;


for(int i=0;i<size; i++){
    if(key == arr[i]){
        printf("Element found at position %d",i+1);
        flag = 1;
        break;
    }
    
}

if(flag == 0){
    printf("Element not found in the array");
}


    return 0;
}