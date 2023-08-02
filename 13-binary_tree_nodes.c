#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * @tree: The binary tree
 *
 * Return: Number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_nodes, r_nodes;

	if (tree == NULL)
		return (0);

	l_nodes = binary_tree_nodes(tree->left);
	r_nodes = binary_tree_nodes(tree->right);

	if (
