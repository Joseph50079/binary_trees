#include "binary_trees.h"

/*
 * binary_tree_insert_left - insert's node at parents right hand node
 * @parent: parent of node
 * @value: value of node (int)
 * Return: new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
    {
        return NULL;
    }

    if (!parent)
    {
        return NULL;
    }
    if (parent->left != NULL)
    {
        new_node->n = value;
        new_node->left = parent->left;
        parent->left = new_node;
        new_node->parent = parent;
        new_node->left->parent = new_node;
    }
    else
    {
        parent->left = new_node;
        new_node->n = value;
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = NULL;
    }

    return (new_node);
}