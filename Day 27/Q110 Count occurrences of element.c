#include <stdio.h>

// Function to count occurrences
int countOccurrences(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, key;

    printf("=== Count Occurrences of Element ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to count: ");
    scanf("%d", &key);

    int count = countOccurrences(arr, n, key);
    printf("Occurrences of %d: %d\n", key, count);

    return 0;
}
