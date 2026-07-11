#include <stdio.h>
#include <string.h>

// Function to check if str2 is rotation of str1
int isRotation(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Create a temporary string with str1 concatenated twice
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];

    printf("=== String Rotation Checker ===\n");
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

    if (isRotation(str1, str2)) {
        printf("'%s' is a rotation of '%s'\n", str2, str1);
    } else {
        printf("'%s' is NOT a rotation of '%s'\n", str2, str1);
    }

    return 0;
}
