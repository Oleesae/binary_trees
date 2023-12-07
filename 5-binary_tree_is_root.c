#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to the node to checks
 *
 * Return: returns 1 if node is a leaf, otherwise 0
 * if node is NULL returns 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent || node == NULL)
		return (0);
	return (1);
}
