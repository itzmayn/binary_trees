#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 *
 * This function allocates memory for a new binary tree node and initializes
 * its attributes. The parent, left child, and right child pointers are set to NULL.
 *
 * @Return: Pointer to the newly created node, or NULL on memory allocation failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    /* Initialize the node's attributes */
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}
