#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left child of the parent node.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 *
 * This function inserts a new node with the given value as the left child of
 * the specified parent node. If the parent already has a left child, the
 * existing left child is moved down one level and the new node is added as the
 * new left child.
 *
 * Return: Pointer to the newly inserted node, or NULL on memory allocation failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;
    return (new_node);
}
