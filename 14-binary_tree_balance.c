#include "binary_trees.h"

/**
 * height - Calculates the height of a binary tree
 * @tree: The three whose height is to be calculated
 *
 * Return: The height
 */
size_t height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = height(tree->left);
	r_height = height(tree->right);
	return ((r_height > l_height ? r_height : l_height) + 1);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: The tree whose balance factor is to be measured
 *
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = height(tree->left);
	h_right = height(tree->right);

	return (h_left - h_right);
}
