#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotate a binary tree node to the left.
 * @tree: Pointer to the root node of the tree.
 *
 * This function performs a left rotation on a binary tree. The given node becomes
 * the left child of its right child. The pivot node (right child) becomes the new
 * root of the subtree.
 *
 * @tree: Pointer to the root node of the tree.
 * @Return: Pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL); /* Return NULL for invalid input or no right child */
	}
	pivot = tree->right; /* Store the right child as pivot */
	tree->right = pivot->left; /* Assign left child of pivot as right child of tree */
	if (pivot->left != NULL)
	{
		pivot->left->parent = tree; /* Update parent of left child of pivot */
	}
	pivot->left = tree; /* Make tree the left child of pivot */
	pivot->parent = tree->parent; /* Update pivot's parent */
	tree->parent = pivot; /* Update tree's parent */
	return (pivot); /* Return the new root (pivot) */
}
