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

struct node *create_node_with_next(u32 value, struct node *next) {
    struct node *ptr = create_node(value);
    ptr->next = next;

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

struct node *get(struct node *list, u32 idx) {
    u32 i = 0;
    struct node *current = list;
    while (i < idx) {
        current = current->next;
        i++;
    }

    return current;
}

void insert(struct node *list, u32 idx, struct node *node) {
    u32 i = 0;
    struct node *current = list;
    while (i < idx) {
        current = current->next;
        i++;
    }

    node->next = current->next;
    current->next = node;
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
    struct node *ll = create_node_with_next(1, create_node_with_next(2, create_node(3)));

    visit(ll);

    for (u32 i = 0; i < 3; i++) {
        printf("ll[%d] = %d\n", i, get(ll, i)->value);
    }

    insert(ll, 1, create_node(6));
    visit(ll);

    u32 *vec = create_vector();
    vec = push(vec, 6);
    vec = push(vec, 9);
    vec = push(vec, 4);
    vec = push(vec, 2);
    vec = push(vec, 0);

    for (u32 i = 1; i < *vec; i++) {
        printf("vec[%d] = %d\n", i, *(vec+i));
    }

    free(vec);

    return 0;
}

