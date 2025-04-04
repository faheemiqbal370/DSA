#include<stdio.h>

int binarysearch(int arr[],int size,int element){
    int mid,high,low;
    mid=0;
    low=0;
    high=size-1;
    
    //search start
    while(low<=high){
     mid=(high+low)/2;//it will give middle index
    if(arr[mid]== element){
        return mid;
    }
     else if(arr[mid]<element){
        low=mid+1;
    }
    else if(arr[mid]> element){
        high=mid-1;
    }
    }
    //search ends
    return -1;
}


int main()
{
    int arr[]={1,30,40,56,57,97,666,879};
    int size=sizeof(arr)/sizeof(int); //to get size of array
    int element=97;
    int searchindex=binarysearch(arr,size,element);
     if (searchindex != -1) {
        printf("The element %d was found at index %d.\n", element, searchindex);
    } else {
        printf("The element %d was not found in the array.\n", element);
    }
}