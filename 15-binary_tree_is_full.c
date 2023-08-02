#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: The tree to be checked
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_full, r_full;

	if (tree == NULL || tree->right == NULL || tree->left == NULL)
		return (0);
	l_full = binary_tree_is_full(tree->left);
	r_full = binary_tree_is_full(tree->right);
	return (l_full & r_full);
}
