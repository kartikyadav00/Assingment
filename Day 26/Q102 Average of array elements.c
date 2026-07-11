#include <stdio.h>

// Function to find average of array elements
float averageArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int n;

    printf("=== Average of Array Elements ===\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    float average = averageArray(arr, n);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
