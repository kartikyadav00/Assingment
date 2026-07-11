#include <stdio.h>
#include <string.h>

// Function to compress a string
void compressString(char str[]) {
    int n = strlen(str);
    char compressed[100];
    int j = 0;
    int count;

    for (int i = 0; i < n; i++) {
        count = 1;

        // Count consecutive characters
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Add character to compressed string
        compressed[j++] = str[i];

        // Add count if greater than 1
        if (count > 1) {
            char countStr[10];
            sprintf(countStr, "%d", count);
            for (int k = 0; countStr[k] != '\0'; k++) {
                compressed[j++] = countStr[k];
            }
        }
    }
    compressed[j] = '\0';

    printf("Original string: %s\n", str);
    printf("Compressed string: %s\n", compressed);
}

int main() {
    char str[100];

    printf("=== String Compressor ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    compressString(str);

    return 0;
}
