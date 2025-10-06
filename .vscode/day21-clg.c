#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node* first = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    
    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = NULL;

    struct node* third = malloc(sizeof(struct node));
    third->data = 30;

    third->next = first;
    first = third;

    struct node* temp = first;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    free(first);
    free(third);
    free(second);

    return 0;
}
