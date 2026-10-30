#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *second, *newNode;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL)
    {
        free(head);
        free(second);
        return 1;
    }

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    newNode = malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        free(second);
        free(head);
        return 1;
    }

    newNode->data = 10;
    newNode->next = head;
    head = newNode;

    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    free(newNode);
    free(second);
    free(head);

    return 0;
}