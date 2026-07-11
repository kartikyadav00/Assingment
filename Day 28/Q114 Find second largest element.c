#include <stdio.h>

// Function to find second largest
int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }
    
    int max1 = -1, max2 = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    
    return max2;
}

int main() {
    int n;

    printf("=== Find Second Largest Element ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int secondLargest = findSecondLargest(arr, n);
    
    if (secondLargest != -1) {
        printf("Second largest element: %d\n", secondLargest);
    } else {
        printf("No second largest element\n");
    }

    return 0;
}
