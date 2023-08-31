#include "binary_trees.h"

/**
 * bst_search - Search for a specific value in a Binary Search Tree (BST).
 * @tree: Pointer to the root node of the BST.
 * @value: Value to search for.
 *
 * This function searches for a given value within a BST. If the value is found,
 * the function returns the node containing the value. Otherwise, it returns NULL.
 *
 * @tree: Pointer to the root node of the BST.
 * @value: Value to search for.
 * @Return: Pointer to the node with the value, or NULL if not found.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *found;

	if (tree == NULL)
		return (NULL);

	if (value < tree->n)
	{
		found = bst_search(tree->left, value); /* Recurse on the left subtree */
	}
	else if (value > tree->n)
	{
		found = bst_search(tree->right, value); /* Recurse on the right subtree */
	}
	else if (value == tree->n)
		return ((bst_t *)tree); /* Value found, return the current node */
	else
		return (NULL); /* Value not found */
	return (found); /* Return the node where the value was found */
}

