#include <stdio.h>

// Function to remove element
int removeElement(int arr[], int n, int key) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i];
        }
    }
    return j;
}

int main() {
    int n, key;

    printf("=== Remove Element from Array ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to remove: ");
    scanf("%d", &key);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newSize = removeElement(arr, n, key);

    printf("Array after removal: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
