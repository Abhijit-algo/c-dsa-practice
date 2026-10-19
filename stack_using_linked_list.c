#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
    int currentSize;
};

void initialize(struct Stack* s) {
    s->top = NULL;
    s->currentSize = 0;
}

bool isEmpty(struct Stack* s) {
    return s->top == NULL;
}

void push(struct Stack* s, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (newNode == NULL) {
        printf("Stack Overflow! Heap memory exhausted.\n");
        return;
    }
    
    newNode->data = value;
    newNode->next = s->top; 
    s->top = newNode;       
    s->currentSize++;
    
    printf("%d pushed onto stack.\n", value);
}


int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! The stack is empty.\n");
        return -1; 
    }
    
    struct Node* temp = s->top; 
    int poppedValue = temp->data;
    
    s->top = s->top->next;
    free(temp);                 
    s->currentSize--;
    
    return poppedValue;
}


int peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return s->top->data;
}

int size(struct Stack* s) {
    return s->currentSize;
}


void freeStack(struct Stack* s) {
    while (!isEmpty(s)) {
        pop(s);
    }
}

int main() {
    struct Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element (peek): %d\n", peek(&s));
    printf("Current stack size: %d\n", size(&s));

    printf("%d popped from stack.\n", pop(&s));
    printf("Top element after pop: %d\n", peek(&s));

    freeStack(&s);

    return 0;
}
