#include <stdio.h>

// Function to find maximum subarray sum (Kadane's Algorithm)
int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0];
    int currentSum = arr[0];
    
    for (int i = 1; i < n; i++) {
        currentSum = (arr[i] > currentSum + arr[i]) ? arr[i] : currentSum + arr[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }
    
    return maxSum;
}

int main() {
    int n;

    printf("=== Largest Subarray Sum ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxSum = maxSubarraySum(arr, n);
    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
