#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in binary tree
 * @tree: The tree to be counted
 *
 * Return: Number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves, r_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);

	return (l_leaves + r_leaves);
}
