#include <stdio.h>
#include "List1.c"

int
main (char* args[], int argc)
{
    struct List1 
    i1 = {1, NULL};

    struct List1* 
    p = &i1;

    struct List1
    i2 = {2, p};
    
    printf("content = %d\n", i2.data);
    printf("content = %d\n", i2.next->data);
    return 0;
}