#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void sort_names(int (*cmp)(const char *, const char *), char **names, int num);

// Main function
int main() {
int num, i,choice;
	printf("Enter a number to store names: ");
	scanf("%d", &num);

	// Allocate memory for the array of char pointers
	char **names = malloc(num * sizeof(char *));
	if(names==NULL)
{
printf("Memory not allocated\n");
exit(5);
}
	for (i = 0; i < num; i++) {
		names[i] = malloc(100 * sizeof(char));
		printf("Enter name[%d]: ", i + 1);
		scanf(" %99s", names[i]);
	}

 
  // Read names from user
 

    // Get sorting choice from user
    printf("1. Sort with case sensitivity\n");
    printf("2. Sort without case sensitivity\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Function pointer array for strcmp and strcasecmp
    int (*cmp[])(const char *, const char *) = { strcmp, strcasecmp };

    // Sort names based on user's choice
    if (choice == 1 || choice == 2) {
        sort_names(cmp[choice - 1], names, num);

        // Print sorted names
        printf("Sorted names:\n");
        for (int i = 0; i < num; i++) {
            printf("%s\n", names[i]);
        }
    } else {
        printf("Enter a correct choice.\n");
    }

    return 0;
}

// Function to sort names using the provided comparison function
void sort_names(int (*cmp)(const char *, const char *), char **names, int num) {
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (cmp(names[i], names[j]) > 0) {
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}
