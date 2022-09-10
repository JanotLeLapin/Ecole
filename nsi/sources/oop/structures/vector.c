#include <stdlib.h>

int *vec_create() {
    int *ptr = malloc(sizeof(int));
    *ptr = 1;
    return ptr;
}

void *vec_push(int *vec, int value) {
    int old_size = *vec;
    int size = old_size + 1;
    int *new_vec = realloc(vec, sizeof(int) * size);

    *(new_vec + old_size) = value;
    *new_vec = size;

    return new_vec;
}

