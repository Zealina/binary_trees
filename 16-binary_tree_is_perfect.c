#include "binary_trees.h"

/**
 * custom_pow - Calculate the power
 * @base: The base
 * @exponent: The exponent
 * Return: The power calculated
 */
int custom_pow(int base, int exponent)
{
	if (exponent == 0)
		return (1);
	return base * custom_pow(base, exponent - 1);
}
/**
 * count_nodes - Count the number of nodes in a tree
 * @tree: The tree to be counted
 *
 * Return: The number of nodes in tree
 */
int count_nodes(const binary_tree_t *tree)
{
	int l_nodes, r_nodes;

	if (tree == NULL)
		return (0);
	l_nodes = count_nodes(tree->left);
	r_nodes = count_nodes(tree->right);

	return(r_nodes + l_nodes + 1);
}
/**
 * @tree: The tree to be checked
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, height = 0, expected_nodes;
	const binary_tree_t *current;

	current = tree;
	if (tree == NULL)
		return (0);
	while (current)
	{
		current = current->left;
		height++;
	}
	nodes = count_nodes(tree);
	expected_nodes = custom_pow(2, height) - 1;
	return (nodes == expected_nodes);
}
