#include <stdio.h>
#include <string.h>

// Function to remove spaces from string
void removeSpaces(char str[]) {
    int i = 0, j = 0;
    char result[100];

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';

    // Copy result back to original string
    strcpy(str, result);
}

int main() {
    char str[100];

    printf("=== Remove Spaces from String ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Original string: '%s'\n", str);

    removeSpaces(str);

    printf("After removing spaces: '%s'\n", str);

    return 0;
}
