#include "linked_list.h"
#include "vector.h"

#include <stdlib.h>
#include <stdio.h>

void iter(int i, int v) {
    printf("ll[%d] = %d\n", i, v);
}

void visit(struct node *ll) {
    printf("Visiting ll with size %d:\n", ll_size(ll));
    ll_foreach(ll, iter);
}

int main() {
    struct node *ll = ll_create(4, ll_create(5, ll_create_node(6))); // Create a linked list
    visit(ll);

    struct node *extra = ll_create_node(69);
    ll_insert(ll, 1, extra); // Insert an extra node in the linked list
    visit(ll);

    ll_set(ll, 1, 3); // Replace set the value at index 1 to 3
    visit(ll);

    ll_free(ll); // Free allocated memory for each node in the linked list

    int *vec = vec_create();
    vec = vec_push(vec, 6);
    vec = vec_push(vec, 9);
    vec = vec_push(vec, 4);
    vec = vec_push(vec, 2);
    vec = vec_push(vec, 0);

    printf("Visiting vec with size %d:\n", *vec - 1);
    for (int i = 1; i < *vec; i++) {
        printf("vec[%d] = %d\n", i, *(vec+i));
    }
}

