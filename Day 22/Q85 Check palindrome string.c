#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int n = strlen(str);
    int i, j;

    // Remove spaces and convert to lowercase for comparison
    char clean[100];
    int k = 0;
    for (i = 0; i < n; i++) {
        if (str[i] != ' ') {
            clean[k++] = tolower(str[i]);
        }
    }
    clean[k] = '\0';

    // Check if palindrome
    i = 0;
    j = strlen(clean) - 1;
    while (i < j) {
        if (clean[i] != clean[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[100];

    printf("=== Palindrome String Checker ===\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("'%s' is a PALINDROME\n", str);
    } else {
        printf("'%s' is NOT a palindrome\n", str);
    }

    return 0;
}
