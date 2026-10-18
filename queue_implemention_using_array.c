#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 5 

int queueArray[CAPACITY];
int front = 0;
int rear = 0;
int currentSize = 0;

bool isFull() {
    return (currentSize == CAPACITY);
}


bool isEmpty() {
    return (currentSize == 0);
}


void enqueue(int item) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", item);
        return;
    }
    
    
    queueArray[rear] = item;
    
    
    rear = (rear + 1) % CAPACITY;
    currentSize++;
    
    printf("Enqueued: %d\n", item);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1; 
    }
    
    int item = queueArray[front];
    
    front = (front + 1) % CAPACITY;
    currentSize--;
    
    return item;
}

int peekFront() {
    if (isEmpty()) {
        return -1;
    }
    return queueArray[front];
}

int main() {
    printf("--- Array Queue Operations ---\n");
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    
     
    enqueue(60); 

    printf("\nDequeued item: %d\n", dequeue());
    printf("Dequeued item: %d\n", dequeue());

    printf("\nCurrent Front Item: %d\n", peekFront());

    printf("\nTesting circular wrap-around:\n");
    enqueue(60); 

    return 0;
}
