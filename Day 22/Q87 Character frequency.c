#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count character frequency
void characterFrequency(char str[]) {
    int freq[256] = {0};
    int i;

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[(int)str[i]]++;
        }
    }

    printf("\nCharacter Frequency:\n");
    printf("===================\n");

    // Display frequency
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' -> %d\n", (char)i, freq[i]);
        }
    }
}

int main() {
    char str[100];

    printf("=== Character Frequency Counter ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    characterFrequency(str);

    return 0;
}
