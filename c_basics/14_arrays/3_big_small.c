/*3) Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.*/
#include<stdio.h>

int main() {
	int num[10];
	printf("Enter 10 elements:\n");

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	printf("Printing the array:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}

	int big = num[0];
	int min = num[0];
	int big_index = 0;
	int min_index = 0;

	for (int i = 1; i < 10; i++) {
		if (big < num[i]) {
			big = num[i];
			big_index = i;
		}
		if (min > num[i]) {
			min = num[i];
			min_index = i;
		}
	}
	printf("\nBiggest of all elements: %d (at index %d)\n", big, big_index);
	printf("Smallest of all elements: %d (at index %d)\n", min, min_index);
	return 0;
}

