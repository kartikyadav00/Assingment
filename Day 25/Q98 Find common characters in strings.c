#include <stdio.h>
#include <string.h>

// Function to find common characters in strings
void findCommonChars(char str1[], char str2[]) {
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    // Count frequency in first string
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ') {
            freq1[(int)str1[i]]++;
        }
    }

    // Count frequency in second string
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ') {
            freq2[(int)str2[i]]++;
        }
    }

    printf("Common characters: ");
    int found = 0;
    for (i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            printf("%c ", (char)i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];

    printf("=== Common Characters Finder ===\n");
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    findCommonChars(str1, str2);

    return 0;
}
