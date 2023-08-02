#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node
 * @tree: The node whose depth is to be calculated
 *
 * Return: The depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
