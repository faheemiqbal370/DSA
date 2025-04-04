#include <stdio.h>

int main() {
    int n, i, element, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search for: ");
    scanf("%d", &element);

    printf("Locations of element %d: ", element);
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("%d ", i);  
            count++;           
        }
    }

    if (count == 0) {
        printf("\nElement not found in the array.");
    } else {
        printf("\nThe element %d appears %d times in the array.\n", element, count);
    }

    return 0;
}
