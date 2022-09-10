#include <stdio.h>
#include <stdlib.h>

#define u32 unsigned int

// Linked list
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
    printf("\n");
}

// Vector
u32 *create_vector() {
    u32 *ptr = malloc(sizeof(u32));
    *ptr = 1;
    return ptr;
}

u32 *push(u32 *ptr, u32 value) {
    u32 size = *ptr + 1;
    u32 *new_ptr = realloc(ptr, sizeof(u32) * size);

    *(new_ptr + *ptr) = value;
    *(new_ptr) = size;
    return new_ptr;
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

    u32 *vec = create_vector();
    vec = push(vec, 6);
    vec = push(vec, 9);
    vec = push(vec, 4);
    vec = push(vec, 2);
    vec = push(vec, 0);

    for (int i = 1; i < *vec; i++) {
        printf("vec[%d] = %d\n", i, *(vec+i));
    }

    free(vec);

    return 0;
}

