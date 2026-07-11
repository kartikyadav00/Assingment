#include <stdio.h>

// Function to find second smallest
int findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }
    
    int min1 = 999999, min2 = 999999;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }
    
    return min2;
}

int main() {
    int n;

    printf("=== Find Second Smallest Element ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int secondSmallest = findSecondSmallest(arr, n);
    
    if (secondSmallest != 999999) {
        printf("Second smallest element: %d\n", secondSmallest);
    } else {
        printf("No second smallest element\n");
    }

    return 0;
}
