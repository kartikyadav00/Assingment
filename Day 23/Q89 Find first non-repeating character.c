#include <stdio.h>
#include <string.h>

// Function to find first non-repeating character
char firstNonRepeatingChar(char str[]) {
    int freq[256] = {0};
    int i;

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find first non-repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';
}

int main() {
    char str[100];

    printf("=== First Non-Repeating Character Finder ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char result = firstNonRepeatingChar(str);

    if (result != '\0') {
        printf("First non-repeating character: '%c'\n", result);
    } else {
        printf("No non-repeating character found\n");
    }

    return 0;
}
