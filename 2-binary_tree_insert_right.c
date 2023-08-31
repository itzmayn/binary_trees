#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child of the parent node.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 *
 * This function inserts a new node with the given value as the right child of
 * the specified parent node. If the parent already has a right child, the
 * existing right child is moved down one level, and the new node becomes the
 * new right child.
 *
 * Return: Pointer to the newly inserted node, or NULL on memory allocation failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
    {
        return (NULL);
    }

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return (NULL);
    }
    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;
    return (new_node);
}
