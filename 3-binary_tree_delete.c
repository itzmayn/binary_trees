#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively free an entire binary tree.
 * @node: Pointer to the current node to be freed.
 *
 * This function recursively frees an entire binary tree by traversing
 * it in a post-order manner and releasing memory for each node.
 *
 * @Note: The function employs post-order traversal to ensure that child
 * nodes are freed before their parent nodes.
 */
void binary_tree_delete(binary_tree_t *node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {
        if (node != NULL)
        {
            binary_tree_delete(node->left);
            binary_tree_delete(node->right);
        }
        free(node);
    }
}
