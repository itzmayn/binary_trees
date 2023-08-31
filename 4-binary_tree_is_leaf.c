#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf.
 * @node: Pointer to the node to be checked.
 *
 * This function determines whether a given node is a leaf node in a binary tree.
 * A leaf node is a node that does not have any children, neither left nor right.
 *
 * @Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    
    if (node->left == NULL && node->right == NULL)
        return (1);
    
    return (0);
}
