#include <stdio.h>
#include <string.h>

// Function to find maximum occurring character
char maxOccurringChar(char str[]) {
    int freq[256] = {0};
    int i;
    int maxFreq = 0;
    char maxChar = '\0';

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[(int)str[i]]++;
        }
    }

    // Find maximum occurring character
    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char str[100];

    printf("=== Maximum Occurring Character Finder ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char result = maxOccurringChar(str);

    if (result != '\0') {
        printf("Maximum occurring character: '%c'\n", result);
    } else {
        printf("No character found\n");
    }

    return 0;
}
