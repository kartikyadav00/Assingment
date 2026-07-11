#include <stdio.h>
#include <string.h>

// Comparison function for qsort (by length)
int compareByLength(const void *a, const void *b) {
    int lenA = strlen(*(const char **)a);
    int lenB = strlen(*(const char **)b);
    return lenA - lenB;
}

// Function to sort words by length
void sortWordsByLength() {
    char words[100][50];
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar(); // consume newline

    printf("Enter words:\n");
    for (int i = 0; i < n; i++) {
        printf("Word %d: ", i + 1);
        fgets(words[i], sizeof(words[i]), stdin);

        // Remove newline
        size_t len = strlen(words[i]);
        if (len > 0 && words[i][len - 1] == '\n') {
            words[i][len - 1] = '\0';
        }
    }

    // Sort words by length
    qsort(words, n, sizeof(words[0]), compareByLength);

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s (length: %lu)\n", i + 1, words[i], strlen(words[i]));
    }
}

int main() {
    printf("=== Sort Words by Length ===\n");
    sortWordsByLength();

    return 0;
}
