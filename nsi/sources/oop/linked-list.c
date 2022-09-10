#include <stdio.h>
#include <stdlib.h>

#define u32 unsigned int

struct node {
    u32 value;
    struct node *next;
};

struct node *create_node(u32 value) {
    struct node *ptr;
    ptr = malloc(sizeof(struct node));

    ptr->value = value;

    return ptr;
}

void visit(struct node *node) {
    printf("%d", node->value);

    struct node *current = node->next;
    while (current) {
        printf(" -> %d", current->value);
        current = current->next;
    }
}

int main() {
    struct node *node_1 = create_node(1);
    struct node *node_2 = create_node(2);
    struct node *node_3 = create_node(3);

    node_1->next = node_3;
    node_3->next = node_2;

    visit(node_1);

    free(node_1);
    free(node_2);
    free(node_3);

    return 0;
}

