#include <stdio.h>
#include <string.h>

// Function to find first repeating character
char firstRepeatingChar(char str[]) {
    int freq[256] = {0};
    int i;

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find first repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] > 1) {
            return str[i];
        }
    }

    return '\0';
}

int main() {
    char str[100];

    printf("=== First Repeating Character Finder ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char result = firstRepeatingChar(str);

    if (result != '\0') {
        printf("First repeating character: '%c'\n", result);
    } else {
        printf("No repeating character found\n");
    }

    return 0;
}
