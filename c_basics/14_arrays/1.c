#include <stdio.h>

void findDuplicates(int arr[], int size);

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Enter size greater than zero\n");
        return 0;
    }

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, size);

    return 0;
}

void findDuplicates(int arr[], int size) {
    int dup[size]; // Array to store duplicate elements
    int dupCount = 0; // Number of duplicate elements found

    printf("Duplicate values: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                int isDuplicate = 0;
                // Check if arr[i] is already in dup array
                for (int k = 0; k < dupCount; k++) {
                    if (arr[i] == dup[k]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    dup[dupCount++] = arr[i];
                }
            }
        }
    }

    // Print the duplicates
    for (int i = 0; i < dupCount; i++) {
        printf("%d ", dup[i]);
    }
    printf("\n");
}

