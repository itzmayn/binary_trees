#include "binary_trees.h"

/**
 * bst_insert - Insert nodes to create a Binary Search Tree (BST).
 * @tree: Pointer to the tree (or subtree) to insert into.
 * @value: Value of the node to insert.
 *
 * This function inserts a new node with the specified value into a BST.
 * If the tree is empty, a new root node is created with the given value.
 * Otherwise, the node is inserted in the appropriate position within the tree.
 *
 * @tree: Pointer to the tree (or subtree) to insert into.
 * @value: Value of the node to insert.
 * @Return: Pointer to the newly inserted node.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *temp;
	binary_tree_t *aux;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		aux = binary_tree_node((binary_tree_t *)(*tree), value);
		new = (bst_t *)aux;
		*tree = new; /* Create a new root node */
	}
	else
	{
		temp = *tree;
		if (value < temp->n)
		{
			if (temp->left)
				new = bst_insert(&temp->left, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->left = (bst_t *)aux; /* Insert as left child */
			}
		}
		else if (value > temp->n)
		{
			if (temp->right)
				new = bst_insert(&temp->right, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->right = aux; /* Insert as right child */
			}
		}
		else
			return (NULL); /* Avoid duplicates */
	}
	return (new);
}
