#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * This function finds and returns the common ancestor node of two given nodes
 * in a binary tree. If the input nodes are the same, the function returns that node.
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * @Return: Pointer to the common ancestor node, or NULL if the inputs are invalid.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *p, *q;

	if (first == NULL || second == NULL)
	{
		return (NULL); /* Return NULL for invalid input */
	}
	if (first == second)
	{
		return ((binary_tree_t *)first); /* Return the common node if same */
	}

	p = first->parent;
	q = second->parent;
	if (p == NULL || first == q || (!p->parent && q))
	{
		return (binary_trees_ancestor(first, q)); /* Recurse with updated arguments */
	}
	else if (q == NULL || p == second || (!q->parent && p))
	{
		return (binary_trees_ancestor(p, second)); /* Recurse with updated arguments */
	}
	return (binary_trees_ancestor(p, q)); /* Recurse with updated arguments */
}
