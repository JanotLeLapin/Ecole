// A linked list implementation
// Efficient for frequent writes and infrequent reads

struct node {
    int value;
    struct node *next;
};

struct node *ll_create_node(int value);
struct node *ll_create(int value, struct node *next);
void ll_foreach(struct node *list, void (*f)(int index, int value));
struct node *ll_get(struct node *list, int index);
void ll_set(struct node *list, int index, int value);
void ll_insert(struct node *list, int index, struct node *node);
int ll_size(struct node *list);
void ll_free(struct node *list);

