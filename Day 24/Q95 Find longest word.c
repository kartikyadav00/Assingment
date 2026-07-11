#include <stdio.h>
#include <string.h>

// Function to find longest word
void findLongestWord(char sentence[]) {
    char words[50][50];
    int wordCount = 0;
    int i = 0, j = 0;

    // Extract words from sentence
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\t') {
            words[wordCount][j++] = sentence[i];
        } else {
            if (j > 0) {
                words[wordCount][j] = '\0';
                wordCount++;
                j = 0;
            }
        }
        i++;
    }
    if (j > 0) {
        words[wordCount][j] = '\0';
        wordCount++;
    }

    // Find longest word
    int maxLen = 0;
    int maxIndex = 0;
    for (i = 0; i < wordCount; i++) {
        if (strlen(words[i]) > maxLen) {
            maxLen = strlen(words[i]);
            maxIndex = i;
        }
    }

    printf("Longest word: '%s' (length: %d)\n", words[maxIndex], maxLen);
}

int main() {
    char sentence[200];

    printf("=== Longest Word Finder ===\n");
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    findLongestWord(sentence);

    return 0;
}
