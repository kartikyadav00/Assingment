#include <stdio.h>
#include <string.h>

// Function to compare two strings (case-insensitive)
int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// Function to sort names alphabetically
void sortNamesAlphabetically() {
    char names[100][50];
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // consume newline

    printf("Enter names:\n");
    for (int i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        // Remove newline
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    // Sort names
    qsort(names, n, sizeof(names[0]), compareNames);

    printf("\nNames sorted alphabetically:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}

int main() {
    printf("=== Sort Names Alphabetically ===\n");
    sortNamesAlphabetically();

    return 0;
}
