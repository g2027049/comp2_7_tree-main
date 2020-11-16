#include <iostream>
#include "../include/libtree.h"

int main()
{
    binary_tree tree;
    initialize(&tree);

    add_node(&tree, 2, "world");
    add_node(&tree, 1, "hello");
    add_node(&tree, 3, "!");

    serach(&tree, [](const node * p) { printf("%s ", p->value); });
    printf("\n");


    finalize(&tree);
}
