#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: The tree whose height is to be measured
 *
 * Return: Height of tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height >= r_height)
		height = l_height + 1;
	else
		height = r_height + 1;
	return (height);
}
