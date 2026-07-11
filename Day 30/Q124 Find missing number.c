#include <stdio.h>

// Function to find missing number
int findMissing(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    int expectedSum = (n + 1) * (n + 2) / 2;
    return expectedSum - sum;
}

int main() {
    int n;

    printf("=== Find Missing Number ===\n");
    printf("Enter number of elements (from 1 to n+1): ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements (1 to %d with one missing):\n", n + 1);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int missing = findMissing(arr, n);
    printf("Missing number: %d\n", missing);

    return 0;
}
