#include "binary_trees.h"

/**
 * binary_tree_node -  add a  binary tree
 * @parent : parent of node
 * @value : the value of the node
 *
 * Return: NULL or new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}