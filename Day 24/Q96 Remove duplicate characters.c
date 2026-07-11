#include <stdio.h>
#include <string.h>

// Function to remove duplicate characters
void removeDuplicates(char str[]) {
    int seen[256] = {0};
    int j = 0;
    char result[100];

    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(int)str[i]]) {
            result[j++] = str[i];
            seen[(int)str[i]] = 1;
        }
    }
    result[j] = '\0';

    printf("Original string: %s\n", str);
    printf("After removing duplicates: %s\n", result);
}

int main() {
    char str[100];

    printf("=== Duplicate Character Remover ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    removeDuplicates(str);

    return 0;
}
