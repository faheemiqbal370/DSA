#include <stdio.h>

// Function to input an array
void inputArray(int arr[], int size) {
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display the array
void displayArray(int arr[], int size) {
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Call function to input the array
    inputArray(arr, size);
    
    // Call function to display the array
    displayArray(arr, size);

    return 0;
}