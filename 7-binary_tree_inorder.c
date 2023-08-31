#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to the function to be applied to each node's value.
 *
 * This function performs an in-order traversal of a binary tree, starting from
 * the given root node. For each visited node, the specified function is applied
 * to the value of the node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);   /* Traverse left subtree */
	func(tree->n);                          /* Apply function to current node */
	binary_tree_inorder(tree->right, func);  /* Traverse right subtree */
}
