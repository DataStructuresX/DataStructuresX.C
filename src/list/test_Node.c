#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

int
main(char *args[], int argc)
{
    Node *a1 = new_Node(1, NULL);
    Node *a2 = new_Node(2, a1);
    printf("node 1 data: %d\n", data_Node(a1));
    printf("node 2 data: %d\n", data_Node(a2));
    printf("node 1 data: %d\n", data_Node(next_Node(a2)));
    free(a1);
    free(a2);
    return 0;
}