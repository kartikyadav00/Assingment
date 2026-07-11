#include <stdio.h>

// Function to find all subarray sums
void findSubarraySums(int arr[], int n) {
    printf("Subarray Sums:\n");
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            printf("Sum from index %d to %d: %d\n", i, j, sum);
        }
    }
}

int main() {
    int n;

    printf("=== Find Sum of Subarrays ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    findSubarraySums(arr, n);

    return 0;
}
