#include "binary_trees.h"

/**
 * array_to_bst - Convert an array into a Binary Search Tree (BST).
 * @array: Pointer to the array to be converted.
 * @size: Size of the array.
 *
 * This function takes an array of integers and creates a Binary Search Tree (BST)
 * from it. It iterates through the array and inserts each element into the BST.
 *
 * @array: Pointer to the array to be converted.
 * @size: Size of the array.
 * @Return: Pointer to the root node of the created BST.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root;

	root = NULL;
	if (size == 0)
	{
		return (NULL); /* Return NULL for an empty array */
	}
	for (; i < size; i++)
	{
		if (i == 0)
		{
			bst_insert(&root, array[i]); /* Insert the first element as root */
		}
		else
		{
			bst_insert(&root, array[i]); /* Insert subsequent elements */
		}
	}
	return (root);
}
