#include <stdio.h>

// Function to count pairs with given sum
int countPairs(int arr[], int n, int targetSum) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair: (%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int n, targetSum;

    printf("=== Count Pairs with Sum ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &targetSum);

    int count = countPairs(arr, n, targetSum);
    printf("Total pairs with sum %d: %d\n", targetSum, count);

    return 0;
}
