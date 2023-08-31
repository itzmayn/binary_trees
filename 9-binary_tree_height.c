#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * This function calculates and returns the height of a binary tree. The height
 * is defined as the number of edges on the longest path from the root node
 * to a leaf node in the tree.
 *
 * @Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0); /* Return 0 for an empty tree */
	}
	else
	{
		if (tree)
		{
			/* Calculate the height of the left and right subtrees recursively */
			left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((left_height > right_height) ? left_height : right_height);
	}
}
