#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node from the root.
 * @tree: Pointer to the node for which to calculate the depth.
 *
 * This function calculates and returns the depth of a given node from the root
 * of the binary tree. The depth of a node is defined as the number of edges on
 * the path from the root node to the specified node.
 *
 * @Return: The depth of the node. Returns 0 if the input node is the root.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
