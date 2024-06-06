#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is a root
 * @node: node to be checked
 * Return: 1 if its a root else 0
 * 
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    if (!node)
    {
        return (0);
    }
    else if (node->parent == NULL)
        return (1);
    else
        return (0);
}