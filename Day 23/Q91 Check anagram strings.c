#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to sort a string
void sortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    // Remove spaces and convert to lowercase
    char s1[100], s2[100];
    int k1 = 0, k2 = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ') {
            s1[k1++] = str1[i];
        }
    }
    s1[k1] = '\0';

    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ') {
            s2[k2++] = str2[i];
        }
    }
    s2[k2] = '\0';

    // Check length
    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    // Sort both strings
    sortString(s1);
    sortString(s2);

    // Compare
    return strcmp(s1, s2) == 0;
}

int main() {
    char str1[100], str2[100];

    printf("=== Anagram Checker ===\n");
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

    if (areAnagrams(str1, str2)) {
        printf("'%s' and '%s' are ANAGRAMS\n", str1, str2);
    } else {
        printf("'%s' and '%s' are NOT anagrams\n", str1, str2);
    }

    return 0;
}
