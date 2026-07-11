#include <stdio.h>

// Function to find intersection of two arrays
void findIntersection(int arr1[], int n1, int arr2[], int n2) {
    printf("Intersection: ");
    int found = 0;
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break;
            }
        }
    }
    
    if (!found) {
        printf("No common elements");
    }
    printf("\n");
}

int main() {
    int n1, n2;

    printf("=== Array Intersection ===\n");
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

    findIntersection(arr1, n1, arr2, n2);

    return 0;
}
