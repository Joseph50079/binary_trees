#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: is the node to check
 * Return: 1 if its a leaf or else 0
 * 
*/


int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
    {
        return (0);
    }
    else if (node->left != NULL || node->right != NULL)
    {
        return (0);
    }
    else
        return (1);
}