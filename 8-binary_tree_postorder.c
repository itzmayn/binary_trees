#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to the function to be applied to each node's value.
 *
 * This function performs a post-order traversal of a binary tree, starting from
 * the given root node. For each visited node, the specified function is applied
 * to the value of the node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);   /* Traverse left subtree */
	binary_tree_postorder(tree->right, func);  /* Traverse right subtree */
	func(tree->n);                             /* Apply function to current node */
}
