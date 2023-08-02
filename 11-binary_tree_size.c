#include "binary_trees.h"

/**
 * binary_tree_size - Get the size of the binary tree
 * @tree: The parent node to calculate from
 * Return: The size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}
