#include<stdio.h>


void input(int arr[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}


void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int search(int arr[], int key, int n){
    int flag = 0;
    int i = 0;
    for(i=0;i<n;i++){
        if(arr[i] == key);
        break;
    }
    printf("Elemnt found at position %d",i+1);
    flag = 1;
    return flag;
       
}





int main(){
    int n;
    printf("Enter no of elements present in array\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements present in array\n");
    input(arr,n);


    printf("Elements present in array are \n");
    display(arr,n);

    int key;
    printf("Enter element to search \n");
    scanf("%d",&key);

    int x = search(arr, key, n);

    if(x){
        printf("Elment found ");
    }
    else{
        printf("Element not found ");
    }

    return 0;
}