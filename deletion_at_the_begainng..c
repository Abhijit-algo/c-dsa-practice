#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteAtBeginning(struct Node** head_ref) {
    // Step 1: Check if the list is empty
    if (*head_ref == NULL) {
        printf("List is already empty.\n");
        return;
    }
    
    struct Node* temp = *head_ref;
    
    *head_ref = (*head_ref)->next;
    
    free(temp);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    *head_ref = new_node;
}

int main() {
    struct Node* head = NULL;

    push(&head, 10);
    push(&head, 20);
    push(&head, 30);

    printf("Original List: ");
    printList(head);

    deleteAtBeginning(&head);

    printf("List after deleting first node: ");
    printList(head);

    return 0;
}
