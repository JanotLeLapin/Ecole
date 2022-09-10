#include "linked_list.h"

#include <stdlib.h>
#include <stdio.h>

struct node *ll_create_node(int value) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->value = value;
    return ptr;
}

struct node *ll_create(int value, struct node *next) {
    struct node *ptr = ll_create_node(value);
    ptr->next = next;
    return ptr;
}

void ll_foreach(struct node *list, void (*f)(int index, int value)) {
    int i = 0;
    struct node *current = list;
    while (current) {
        (*f)(i, current->value);
        current = current->next;
        i++;
    }
}

struct node *ll_get(struct node *list, int index) {
    int i = 0;
    struct node *current = list;
    while (i < index) {
        current = current->next;
        i++;
    }

    return current;
}

void ll_set(struct node *list, int index, int value) {
    int i = 0;
    struct node *current = list;
    while (i < index) {
        current = current->next;
        i++;
    }
    current->value = value;
}

void ll_insert(struct node *list, int index, struct node *node) {
    int i = 0;
    struct node *current = list;
    while (i < index) {
        current = current->next;
        i++;
    }

    node->next = current->next;
    current->next = node;
}

int ll_size(struct node *list) {
    int i = 0;
    struct node *current = list;
    while (current) {
        current = current->next;
        i++;
    }

    return i;
}

void ll_free(struct node *list) {
    int size = ll_size(list);
    struct node *nodes = malloc(sizeof(struct node) * ll_size(list));

    int i = 0;
    struct node *current = list;
    while (i < size - 1) {
        *(nodes+i) = *current;
        current = current->next;
        i++;
    }

    for (int i = size - 2; i >= 0; i--) {
        free((nodes+i)->next);
    }
    free(list);
}

