/*
   6) sorting a list of names received from the keyboard, with options using callback functions.
1 :  sort with case sensitivity (strcmp)
2 : sort without case sensitivity (stricmp)
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort_with_case_sensitivity(char **names,int num) {
	int i, j;
	for (i = 0; i < num - 1; i++) {
		for (j = i + 1; j < num; j++) {
			if (strcmp(names[i], names[j]) > 0) {
				char *temp = names[i];
				names[i] = names[j];
				names[j] = temp;
			}
		}
	}

}    



// Function for sorting without case sensitivity
void sort_without_case_sensitivity(char **names, int num) {
	int i, j;
	for (i = 0; i < num - 1; i++) {
		for (j = i + 1; j < num; j++) {
			if (strcasecmp(names[i], names[j]) > 0) {
				char *temp = names[i];
				names[i] = names[j];
				names[j] = temp;
			}
		}
	}

}    


int main() {
	int num, i;
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

	int option;
	printf("Choose sorting option:\n");
	printf("1: Sort with case sensitivity (strcmp)\n");
	printf("2: Sort without case sensitivity (strcasecmp)\n");
	scanf("%d", &option);

	if (option == 1) {
		sort_with_case_sensitivity(names, num);
	} else if (option == 2) {
		sort_without_case_sensitivity(names, num);
	} else 
	{
		printf("Invalid option\n");
		// Free the allocated memory
		for (i = 0; i < num; i++) 
		{
			free(names[i]);
		}
		free(names);
		return 1;
	}

	// Print the sorted names
	printf("Sorted names:\n");
	for (i = 0; i < num; i++) 
	{
		printf("%s\n", names[i]);
		free(names[i]); // Free each string after printing
	}
	free(names); // Free the array of pointers

	return 0;
}
