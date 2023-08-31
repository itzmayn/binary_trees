#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full.
 * A binary tree is full if each node has either two children or no children.
 * @tree: Pointer to the root node of the tree to check.
 *
 * This function checks if a given binary tree is full. A binary tree is considered
 * full if each of its nodes has either two children or no children.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0); /* An empty tree is not full */
	}
	else
	{
		if (tree->left && tree->right) /* If the node has two children */
		{
			left = binary_tree_is_full(tree->left);   /* Check left subtree */
			right = binary_tree_is_full(tree->right); /* Check right subtree */

			/* If any subtree is not full, return 0 */
			if (left == 0 || right == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right) /* If the node has no children */
		{
			return (1); /* A node with no children is a full node */
		}
		else /* If the node has only one child */
		{
			return (0); /* A node with one child is not full */
		}
	}
}
