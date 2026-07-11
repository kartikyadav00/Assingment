#include <stdio.h>

// Function to insert element at position
void insertElement(int arr[], int *n, int key, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Invalid position\n");
        return;
    }
    
    for (int i = *n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = key;
    (*n)++;
}

int main() {
    int n, key, pos;

    printf("=== Insert Element at Position ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    printf("Enter position (0-based): ");
    scanf("%d", &pos);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &n, key, pos);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
