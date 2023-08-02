#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: The tree to be checked
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL || tree->right == NULL)
		return (0);
	return (1);
}
