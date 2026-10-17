#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int stack[MAX];
int top = -1; 


void push() {
    int value;
    if (top == MAX - 1) {
        printf("\n[Error] Stack Overflow! Cannot push more items.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("Success: %d pushed onto the stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("\n[Error] Stack Underflow! The stack is already empty.\n");
    } else {
        printf("Success: Popped %d from the stack.\n", stack[top]);
        top--;
    }
}


void peek() {
    if (top == -1) {
        printf("\nStack is empty. Nothing to peek.\n");
    } else {
        printf("The top element is: %d\n", stack[top]);
    }
}


void display() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nCurrent Stack Status (Top to Bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("| %d |\n", stack[i]);
        }
        printf("-----\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n*** STACK OPERATIONS ***\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek (Top Item)\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting program...\n"); exit(0);
            default: printf("Invalid choice! Please select between 1 and 5.\n");
        }
    }
    return 0;
}
