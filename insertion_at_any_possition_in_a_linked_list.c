#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

struct Node* insertAtPosition(struct Node* head, int position, int data) {
    if (position < 1) {
        printf("Invalid position!\n");
        return head;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        return newNode; 
    }
    struct Node* curr = head;
    
    for (int i = 1; i < position - 1 && curr != NULL; i++) {
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Position out of bounds!\n");
        free(newNode); 
        return head;
    }

    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

int main() {
    struct Node* head = NULL;

    head = insertAtPosition(head, 1, 10); 
    
    head = insertAtPosition(head, 2, 30); 
    
    head = insertAtPosition(head, 2, 20); 
    
    head = insertAtPosition(head, 1, 5);  

    printf("Linked List after insertions:\n");
    printList(head);

    head = insertAtPosition(head, 10, 100); 

    return 0;
}
