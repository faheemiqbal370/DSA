#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;  // Return the index if the key is found
        }
        if (arr[mid] > key)
            high = mid - 1;  // Narrow the search to the left half
        else
            low = mid + 1;   // Narrow the search to the right half
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[5] = {1, 3, 5, 7, 9};  // Correct the size of the array
    int low = 0;
    int high = 4;  // Set high to 4 as the last index of the array

    int key;
    printf("Enter the element you want to search in the array: \n");
    scanf("%d", &key);

    int result = binarySearch(arr, low, high, key);

    if (result != -1) {
        printf("Element found at position %d\n", result + 1);  // Convert to 1-based index
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
