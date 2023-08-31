#include "binary_trees.h"

/**
 * binary_tree_preorder - Perform a pre-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to be applied to each node's value.
 *
 * This function performs a pre-order traversal of a binary tree, starting from
 * the given root node. For each visited node, the specified function is applied
 * to the value of the node.
 *
 * @Return: Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }
    else
    {
        func(tree->n); // Apply the function to the current node's value
        binary_tree_preorder(tree->left, func);  // Recurse on the left subtree
        binary_tree_preorder(tree->right, func); // Recurse on the right subtree
    }
}
