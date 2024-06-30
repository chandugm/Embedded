#include<stdio.h>
#include <stdlib.h>

// Creating structure
typedef struct student {
	int id;             // Student ID
	char name[10];      // Student name
	struct student *next; // Pointer to the next student node
} STU;

char ch; // Character to control node creation

// Creating node
STU *create_node() {
	STU *N = malloc(sizeof(STU)); // Allocate memory for a new node
	printf("Enter id and name\n");
	scanf("%d %s", &N->id, N->name); // Read ID and name
	N->next = NULL; // Initialize next pointer to NULL
	return N; // Return the created node
}

// Creating list, making head and last node
STU *create_list() {
	STU *H = NULL, *N = NULL, *L = NULL; // Initialize head, new node, and last node pointers
	while (ch != 'n') { // Loop until user inputs 'n'
		N = create_node(); // Create a new node
		if (H == NULL)
			H = N; // If list is empty, set head to the new node
		else
			L->next = N; // Otherwise, link the last node to the new node
		L = N; // Update the last node to the new node

		printf("Enter (y/n) to create a node\n");
		scanf(" %c", &ch); // Read the next character to control loop
	}
	return H; // Return the head of the list
}

// Traversal function to print the list
void printf_list(STU *T) {
	while (T != NULL) {
		printf("%d %s\n", T->id, T->name); // Print the current node's data
		T = T->next; // Move to the next node
	}
}

int main() {
	STU *H; // Head pointer for the list
	H = create_list(); // Create the list
	print_list(H); // Traverse and print the list
	return 0; // Return success
}

