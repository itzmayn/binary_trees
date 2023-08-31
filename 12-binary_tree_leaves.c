#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * This function counts and returns the number of leaves in a binary tree.
 * A leaf node is a node that has no children (neither left nor right).
 *
 * Return: The number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0, left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_leaves = binary_tree_leaves(tree->left);
		right_leaves = binary_tree_leaves(tree->right);
		num_leaves = left_leaves + right_leaves;

		/* Add 1 if the current node is a leaf, else 0 */
		return ((!left_leaves && !right_leaves) ? num_leaves + 1 : num_leaves + 0);
	}
}
