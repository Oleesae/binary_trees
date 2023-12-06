#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts a node as the left child
 * of another node
 * @parent: pointer to the node to insert the left child in.
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node or NULL on failure
 * or if the parent node is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL || new_node == NULL)
	{
		return (NULL);
	}


	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;
	parent->left = new_node;
	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
