#include "binary_trees.h"

/**
 * is_bst_helper - The recurive function
 * @node: The node to check
 *
 * @min_val: The min_value allowed
 * @max_val: Maximum value allowed
 *
 * Return: 1 if it is a BST, 0 otherwise
 */
int is_bst_helper(const binary_tree_t *node, int min_val, int max_val)
{
	if (node == NULL)
		return (1);
	if (node->n <= min_val || node->n >= max_val)
		return (0);
	return (is_bst_helper(node->left, min_val, node->n) &&
		   is_bst_helper(node->right, node->n, max_val));
}
/**
 * binary_tree_is_bst - Checks if a binary tree is a BST
 * @tree: The tree to be checked
 *
 * Return: 1 if valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

