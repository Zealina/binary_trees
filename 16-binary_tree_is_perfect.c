#include "binary_trees.h"

/**
 * bin_tree_is_full - Checks if a binary tree is full
 * @tree: The tree to be checked
 *
 * Return: 1 if full, 0 otherwise
 */
int bin_tree_is_full(const binary_tree_t *tree)
{
	int l_full, r_full;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_full = bin_tree_is_full(tree->left);
	r_full = bin_tree_is_full(tree->right);
	return (l_full && r_full);
}
/**
 * bin_tree_height - Measures the height of a binary tree
 * @tree: The tree whose height is to be measured
 *
 * Return: Height of tree
 *
 */
size_t bin_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_height = bin_tree_height(tree->left);
	r_height = bin_tree_height(tree->right);

	if (l_height >= r_height)
		height = l_height + 1;
	else
		height = r_height + 1;
	return (height);
}
/**
 * binary_tree_is_perfect - Check if tree is perfect
 * @tree: The tree to be checked
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height, r_height, l_full, r_full;

	if (tree == NULL)
		return (0);
	l_height = bin_tree_height(tree->left);
	r_height = bin_tree_height(tree->right);

	l_full = bin_tree_is_full(tree->left);
	r_full = bin_tree_is_full(tree->right);

	if (l_height == r_height && l_full == 1 && r_full == 1)
		return (1);
	return (0);
}
