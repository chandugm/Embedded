/*8)  Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. 
  Assume that the input arrays are sorted.
  eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20*/
#include <stdio.h>
#include <stdlib.h>

int *merge_arrays(int *arr1, int n, int *arr2, int m, int *size3) {
	int *arr3 = malloc((n + m) * sizeof(int));
	if (arr3 == NULL) {
		printf("Memory not allocated\n");
		exit(1);
	}

	int i = 0, j = 0, k = 0;

	// Merge arrays and skip duplicates
	while (i < n && j < m) {
		if (arr1[i] < arr2[j]) {
			arr3[k++] = arr1[i++];
		} else if (arr1[i] > arr2[j]) {
			arr3[k++] = arr2[j++];
		} else {
			arr3[k++] = arr1[i++];
			j++;
		}
	}

	// Add remaining elements from arr1
	while (i < n) {
		arr3[k++] = arr1[i++];
	}

	// Add remaining elements from arr2
	while (j < m) {
		arr3[k++] = arr2[j++];
	}

	*size3 = k; // Update the size of the merged array
	return arr3;
}

int main() {
	int n, m, i;
	printf("Enter arr1 and arr2 size\n");
	scanf("%d%d", &n, &m);

	int *arr1 = malloc(n * sizeof(int));
	int *arr2 = malloc(m * sizeof(int));
	if (arr1 == NULL || arr2 == NULL) {
		printf("Memory not allocated\n");
		exit(1);
	}

	printf("Enter arr1 elements\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}

	printf("Enter arr2 elements\n");
	for (i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
	}

	int size3;
	int *result = merge_arrays(arr1, n, arr2, m, &size3);
	if (result == NULL) {
		printf("Memory not allocated\n");
		exit(1);
	}

	printf("Sorted Array: ");
	for (i = 0; i < size3; i++) {
		printf("%d ", result[i]);
	}
	printf("\n");

	// Free allocated memory
	free(arr1);
	free(arr2);
	free(result);

	return 0;
}

