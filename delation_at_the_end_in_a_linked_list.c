#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteAtEnd(struct Node* head) {
    // Case 1: The list is empty
    if (head == NULL) {
        printf("The list is already empty.\n");
        return NULL;
    }
    
    if (head->next == NULL) {
        free(head);
        return NULL; 
    }
    
    struct Node* curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    
    free(curr->next);
    
    curr->next = NULL;
    
    return head;
}

void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

struct Node* insertAtHead(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

int main() {
    struct Node* head = NULL;

    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    
    printf("Original List: ");
    printList(head);

    head = deleteAtEnd(head);
    printf("After deleting from end: ");
    printList(head);

    head = deleteAtEnd(head);
    printf("After deleting again: ");
    printList(head);

    return 0;
}
