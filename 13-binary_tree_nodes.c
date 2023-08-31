#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculate the number of nodes in a binary tree with children.
 * @tree: Pointer to the root node of the tree to count nodes with children.
 *
 * This function calculates and returns the number of nodes in a binary tree that
 * have at least one child (either left or right or both).
 *
 * Return: The number of nodes with children in the binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree == NULL)
	{
		return (0); /* Return 0 for an empty tree */
	}
	else
	{
		num_nodes += ((tree->left || tree->right) ? 1 : 0); /* Count current node if it has children */
		num_nodes += binary_tree_nodes(tree->left);           /* Count nodes with children in the left subtree */
		num_nodes += binary_tree_nodes(tree->right);          /* Count nodes with children in the right subtree */
		return (num_nodes);
	}
}
