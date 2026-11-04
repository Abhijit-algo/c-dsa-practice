#include <stdio.h>
#include <stdlib.h>

// Definition of the Linked List Node
struct Node {
    int data;
    struct Node* next;
};

// Function to delete a node at a given position (1-based indexing)
struct Node* deleteNode(struct Node* head, int position) {
    // Case 1: Empty list
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    struct Node* temp = head;

    // Case 2: Deleting the head node (Position 1)
    if (position == 1) {
        head = head->next; // Move head to the next node
        free(temp);        // Deallocate memory of original head
        return head;
    }

    // Case 3: Deleting any other position
    struct Node* prev = NULL;
    
    // Traverse to the node at the specified position
    for (int i = 1; i < position; i++) {
        if (temp == NULL) {
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    // If the position is greater than the number of nodes
    if (temp == NULL) {
        printf("Position out of range.\n");
        return head;
    }

    // Unlink the node from linked list and free memory
    prev->next = temp->next;
    free(temp);

    return head;
}

// Helper function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Helper function to insert a new node at the beginning
struct Node* push(struct Node* head, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    return new_node;
}

// Driver code to test the implementation
int main() {
    struct Node* head = NULL;

    // Creating list: 50 -> 40 -> 30 -> 20 -> 10 -> NULL
    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);
    head = push(head, 40);
    head = push(head, 50);

    printf("Original List: \n");
    printList(head);

    // Test Case 1: Delete Middle Node (Position 3 -> value 30)
    head = deleteNode(head, 3);
    printf("\nAfter deleting position 3: \n");
    printList(head);

    // Test Case 2: Delete Head Node (Position 1 -> value 50)
    head = deleteNode(head, 1);
    printf("\nAfter deleting position 1 (head): \n");
    printList(head);

    // Test Case 3: Delete Last Node (Position 3 -> value 10)
    head = deleteNode(head, 3);
    printf("\nAfter deleting position 3 (tail): \n");
    printList(head);

    return 0;
}
