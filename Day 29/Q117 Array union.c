#include <stdio.h>

// Function to find union of two arrays
void findUnion(int arr1[], int n1, int arr2[], int n2) {
    printf("Union: ");
    int seen[1000] = {0};
    
    for (int i = 0; i < n1; i++) {
        if (!seen[arr1[i]]) {
            printf("%d ", arr1[i]);
            seen[arr1[i]] = 1;
        }
    }
    
    for (int i = 0; i < n2; i++) {
        if (!seen[arr2[i]]) {
            printf("%d ", arr2[i]);
            seen[arr2[i]] = 1;
        }
    }
    printf("\n");
}

int main() {
    int n1, n2;

    printf("=== Array Union ===\n");
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[100];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[100];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    findUnion(arr1, n1, arr2, n2);

    return 0;
}
