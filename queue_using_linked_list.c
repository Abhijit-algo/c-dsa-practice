#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* front = NULL;
struct Node* rear = NULL;


void enqueue(int value) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Queue Overflow: Out of memory!\n");
        return;
    }
    
  
    newNode->data = value;
    newNode->next = NULL;
    
    
    if (front == NULL && rear == NULL) {
        front = rear = newNode;
        printf("Enqueued: %d\n", value);
        return;
    }
    
    
    rear->next = newNode;
    rear = newNode;
    printf("Enqueued: %d\n", value);
}


void dequeue() {
 
    if (front == NULL) {
        printf("Queue Underflow: The queue is empty!\n");
        return;
    }
    
    
    struct Node* temp = front;
    printf("Dequeued: %d\n", temp->data);
    
 
    front = front->next;
    
    
    if (front == NULL) {
        rear = NULL;
    }
    

    free(temp);
}


int peek() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return -1;
    }
    return front->data;
}


int isEmpty() {
    return (front == NULL);
}


void display() {
    if (front == NULL) {
        printf("Queue Status: Empty\n");
        return;
    }
    
    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    printf("--- Queue Using Linked List Tutorial ---\n\n");

  
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    printf("Front element (Peek): %d\n\n", peek());

   
    
    dequeue();
    display();
    
    dequeue();
    dequeue();
    display(); 
    
  
    if (isEmpty()) {
        printf("Verification: Queue is now completely empty.\n");
    }

    return 0;
}
