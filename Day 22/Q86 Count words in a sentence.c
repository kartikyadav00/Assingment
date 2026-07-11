#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count words in a sentence
int countWords(char sentence[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i])) {
            if (inWord) {
                count++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        count++;
    }

    return count;
}

int main() {
    char sentence[200];

    printf("=== Word Counter ===\n");
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    int words = countWords(sentence);
    printf("Number of words: %d\n", words);

    return 0;
}
