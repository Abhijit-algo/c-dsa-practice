#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *second;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    printf("%d\n", head->data);
    printf("%d\n", head->next->data);

    free(second);
    free(head);

    return 0;
}