#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes have a child in a binary trees
 * @tree : the binary tree
 *
 * Return: the number of nodes have child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
