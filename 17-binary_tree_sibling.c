#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling node of a given node.
 * @node: Pointer to the node for which to find the sibling.
 *
 * This function checks if a sibling node exists for a given node in a binary tree
 * and returns it. The sibling node shares the same parent as the input node.
 *
 * @node: Pointer to the node to check for a sibling.
 * @Return: Pointer to the sibling node, or NULL if the input node is invalid or has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL); /* Return NULL for invalid input or root node */
	}
	if (node->parent->left == node) /* If the node is a left child */
		return (node->parent->right); /* Return right sibling */
	return (node->parent->left); /* Otherwise, return left sibling */
}
