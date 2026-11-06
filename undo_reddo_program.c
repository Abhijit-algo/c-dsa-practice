#include <stdio.h>

#define SIZE 5

int undoStack[SIZE];
int redoStack[SIZE];

int undoTop = -1;
int redoTop = -1;

void doAction(int action)
{
    if (undoTop == SIZE - 1)
    {
        printf("Undo Stack is Full\n");
        return;
    }

    undoStack[++undoTop] = action;

    redoTop = -1;

    printf("Action %d performed\n", action);
}

void undo()
{
    if (undoTop == -1)
    {
        printf("Nothing to Undo\n");
        return;
    }

    int action = undoStack[undoTop--];
    redoStack[++redoTop] = action;

    printf("Undo Action %d\n", action);
}

void redo()
{
    if (redoTop == -1)
    {
        printf("Nothing to Redo\n");
        return;
    }

    int action = redoStack[redoTop--];
    undoStack[++undoTop] = action;

    printf("Redo Action %d\n", action);
}

int main()
{
    doAction(10);
    doAction(20);
    doAction(30);

    undo();
    undo();

    redo();

    return 0;
}