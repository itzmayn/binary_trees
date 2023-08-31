#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * This function calculates and returns the height of a binary tree. The height
 * is defined as the number of edges on the longest path from the root node
 * to a leaf node in the tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 * @Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * bal_avl - Auxiliary function to check if a subtree is AVL.
 * @tree: Pointer to the root node of the subtree.
 * @lower: Lower limit for node values.
 * @high: Higher limit for node values.
 *
 * This function recursively checks if the given subtree is an AVL tree by
 * verifying the balance factor of each node and ensuring their values are within
 * the specified limits.
 *
 * @tree: Pointer to the root node of the subtree.
 * @lower: Lower limit for node values.
 * @high: Higher limit for node values.
 * @Return: 1 if the subtree is AVL, 0 if not.
 */
int bal_avl(const binary_tree_t *tree, int lower, int high)
{
	size_t height_l, height_r, balancer;

	if (tree != NULL)
	{
		if (tree->n > high || tree->n < lower)
		{
			return (0);
		}
		height_l = binary_tree_height(tree->left);
		height_r = binary_tree_height(tree->right);
		balancer = height_l > height_r ? height_l - height_r : height_r - height_l;
		if (balancer > 1)
		{
			return (0);
		}
		return (bal_avl(tree->left, lower, tree->n - 1) &&
			bal_avl(tree->right, tree->n + 1, high));
	}
	return (1);
}

/**
 * binary_tree_is_avl - Check if a binary tree is a valid AVL tree.
 * @tree: Pointer to the root node of the tree to check.
 * @Return: 1 if the tree is an AVL tree, 0 if not.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (bal_avl(tree, INT_MIN, INT_MAX));
}
