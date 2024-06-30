#include<stdio.h>
#include<stdlib.h>

int ch; // Variable to store user choice

// Defining the student structure with typedef
typedef struct student {
    int id;            // Student ID
    char name[10];     // Student name
    struct student *next; // Pointer to the next student node
} stu;

// Function to create a new node
stu * create_node() {
    stu * N = malloc(sizeof(stu)); // Allocate memory for a new node
    if (N == NULL) {
        printf("Memory not allocated\n");
        exit(1); // Exit if memory allocation fails
    }
    printf("Enter ID and name of the student\n");
    scanf("%d %s", &N->id, N->name); // Read ID and name
    N->next = NULL; // Initialize next pointer to NULL
    return N; // Return the created node
}

// Function to create a list
stu * create_list() {
    stu * H = NULL, * N = NULL, * L = NULL; // Initialize head, new node, and last node pointers
    char ch = 'y'; // Character to control node creation
    while (ch == 'y') { // Loop until user inputs 'n'
        N = create_node(); // Create a new node
        if (H == NULL)
            H = N; // If list is empty, set head to the new node
        else
            L->next = N; // Otherwise, link the last node to the new node
        L = N; // Update the last node to the new node
        printf("Do you want to create node(y/n)\n");
        scanf(" %c", &ch); // Read the next character to control loop
    }
    return H; // Return the head of the list
}

// Function to print the list
void print_list(stu *T) {
    while (T != NULL) {
        printf("%d %s\n", T->id, T->name); // Print the current node's data
        T = T->next; // Move to the next node
    }
}

// Function to insert a node at a given position
stu* insert(stu * T, int pos) {
    stu *N = create_node(); // Create a new node
    stu *A = T; // Save the head pointer
    int cn = 1; // Position counter
    if (pos == 1) {
        N->next = T; // Link the new node to the current head
        return N; // Return the new node as the new head
    } else {
        while (cn < pos - 1 && T != NULL) {
            T = T->next; // Move to the node just before the desired position
            cn++;
        }
        if (T == NULL) {
            printf("node not found\n");
            exit(1); // Exit if the position is invalid
        }
        N->next = T->next; // Link the new node to the next node
        T->next = N; // Link the previous node to the new node
        return A; // Return the original head
    }
}

// Function to insert a node before a given key
stu *insert_before(stu * T, int key) {
    stu * S = T->next; // Temporary pointer to traverse the list
    stu *N = create_node(); // Create a new node
    if (T->id == key) {
        N->next = T; // Link the new node to the current head
        return N; // Return the new node as the new head
    }
    while (S != NULL && S->id != key) {
        T = T->next; // Move to the next node
        S = S->next; // Move to the next node
    }
    if (S == NULL) {
        printf("node not found\n");
        exit(1); // Exit if the key is not found
    }
    N->next = T->next; // Link the new node to the next node
    T->next = N; // Link the previous node to the new node
    return T; // Return the original head
}

// Function to insert a node after a given key
void insert_after(stu *T, int key) {
    while (T != NULL && T->id != key)
        T = T->next; // Move to the node with the given key
    if (T == NULL) {
        printf("node not found\n");
        exit(1); // Exit if the key is not found
    }
    stu *N = create_node(); // Create a new node
    N->next = T->next; // Link the new node to the next node
    T->next = N; // Link the current node to the new node
}

// Function to delete a node with a given key
stu* delete(stu * T, int key) {
    stu *S = T->next; // Temporary pointer to traverse the list
    stu *A = T; // Save the head pointer
    if (T->id == key) {
        free(T); // Free the memory of the deleted node
        return S; // Return the next node as the new head
    } else {
        while (S != NULL && S->id != key) {
            T = T->next; // Move to the next node
            S = S->next; // Move to the next node
        }
        if (S == NULL) {
            printf("node not found\n");
            return NULL; // Exit if the key is not found
        }
        T->next = S->next; // Link the previous node to the next node
        free(S); // Free the memory of the deleted node
        return A; // Return the original head
    }
}

// Function to delete a node before a given key
stu * delete_before(stu* T, int key) {
    stu *A = T; // Save the head pointer
    stu *L = NULL; // Initialize a pointer for the previous node
    stu *S = T->next; // Temporary pointer to traverse the list
    if (S->id == key) {
        A = S; // Update the head if the key is found at the second node
        free(T); // Free the memory of the deleted node
        return A; // Return the new head
    } else {
        while (S != NULL && S->id != key) {
            L = T; // Move to the next node
            T = T->next; // Move to the next node
            S = S->next; // Move to the next node
        }
        if (S == NULL) {
            printf("node not found\n");
            return A; // Return the original head if the key is not found
        }
        L->next = T->next; // Link the previous node to the next node
        free(T); // Free the memory of the deleted node
        return A; // Return the original head
    }
}

// Function to delete a node after a given key
stu * delete_after(stu* T, int key) {
    stu *A = T; // Save the head pointer
    stu *S;
    while (T != NULL && T->id != key) {
        T = T->next; // Move to the node with the given key
    }
    if (T == NULL || T->next == NULL) {
        printf("node not found or no node to delete after key\n");
        return A; // Return the original head if the key is not found or there is no node to delete after the key
    }
    S = T->next; // Temporary pointer to the node to be deleted
    T->next = S->next; // Link the current node to the node after the node to be deleted
    free(S); // Free the memory of the deleted node
    return A; // Return the original head
}

int main() {
    stu *H; // Head pointer for the list
    int pos, key; // Variables for position and key
    H = create_list(); // Create the list
    while (1) {
        printf("Enter your choice to\n1:insert_node\n2:delete_node\n3:print_list\n4:exit\n");
        scanf("%d", &ch); // Read user choice
        if (ch == 1) {
            printf("Enter your choice insert_node\n1:nth place\n2:before_node\n3:after_node\n");
            scanf("%d", &ch); // Read insert choice

            if (ch == 1) {
                printf("Enter position to insert node\n");
                scanf("%d", &pos); // Read position
                H = insert(H, pos); // Insert at position
            } else if (ch == 2) {
                printf("Enter key to insert node\n");
                scanf("%d", &key); // Read key
                H = insert_before(H, key); // Insert before key
            } else if (ch == 3) {
                printf("Enter key to insert node\n");
                scanf("%d", &key); // Read key
                insert_after(H, key); // Insert after key
            }
        } else if (ch == 2) {
            printf("choose options \n1:nth_place\n2:before\n3:after\n");
            scanf("%d", &ch); // Read delete choice
            if (ch == 1) {
                printf("Enter key to delete node\n");
                scanf("%d", &key); // Read key
                H = delete(H, key); // Delete node with key
            } else if (ch == 2) {
                printf("Enter key to delete before node:\n");
                scanf("%d", &key); // Read key
                H = delete_before(H, key); // Delete node before key
            } else if (ch == 3) {
                printf("Enter key to delete after node:\n");
                scanf("%d", &key); // Read key
                H = delete_after(H, key); // Delete node after key
            }
        } else if (ch == 3)
            print_list(H); // Print the list
        else if (ch == 4)
            return 1; // Exit the program
    }
}

