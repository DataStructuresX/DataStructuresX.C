#include <stdlib.h>
struct T_Node 
{
    int data;
    struct T_Node *next;
};

struct T_Node*
new_Node(int data, struct T_Node *follower)
{
    struct T_Node *a = malloc(sizeof(struct T_Node));
    a->data = data;
    a->next = follower;
    return a;
}

struct T_Node*
next_Node(struct T_Node *node)
{
    return node->next;
}

int
data_Node(const struct T_Node *node)
{
    return node->data;
}