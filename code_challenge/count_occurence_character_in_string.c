#include <stdio.h>
#include <string.h>


void countOccurrences(char *str) {
    int len = strlen(str);
    int count[len]; // Array to store counts of each character
    int alreadyCounted[len]; // Array to track already counted characters

    // Initialize count arrays
    for (int i = 0; i < len; i++) {
        count[i] = 0;
        alreadyCounted[i] = 0;
    }

    // Count occurrences of each character
    for (int i = 0; i < len; i++) {
        // Skip already counted characters
        if (alreadyCounted[i]) {
            continue;
        }
        
        // Count this character
        for (int j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count[i]++;
            }
        }

        // Mark this character as counted
        alreadyCounted[i] = 1;
    }

    // Print occurrences of each character
    for (int i = 0; i < len; i++) {
        // Print only if this is the first occurrence
        if (alreadyCounted[i] == 1) {
            printf("%c:%d ", str[i], count[i]);
            // Ensure the same character is not printed again
            for (int j = i + 1; j < len; j++) {
                if (str[i] == str[j]) {
                    alreadyCounted[j] = 0;
                }
            }
        }
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character

    countOccurrences(str);

    return 0;
}
