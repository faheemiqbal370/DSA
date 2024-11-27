#include<stdio.h>

int linearsearch(int arr[], int size,int element){
    for(int i=0;i<size;i++){
         if(arr[i]==element){
           return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,3,4,56,3,54,666,454,34};
    int size=sizeof(arr)/sizeof(int); //to get size of array
    int element=4;
    int searchindex=linearsearch(arr,size,4);
    printf("The element %d was found at index %d \n",element,searchindex);
    
}