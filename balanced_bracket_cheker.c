#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool checkBalanced(char expr[]) {
    top = -1;
    for (int i = 0; i < strlen(expr); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } 
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1 || !isMatchingPair(pop(), ch)) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    char code1[] = "if (arr[0] == {1, 2}) { return 1; }";
    char code2[] = "while (x > 0] { x--; }";

    printf("Code 1: %s\n", checkBalanced(code1) ? "Valid Syntax" : "Syntax Error");
    printf("Code 2: %s\n", checkBalanced(code2) ? "Valid Syntax" : "Syntax Error");

    return 0;
}
