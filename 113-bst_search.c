#include "binary_trees.h"

/**
 * bst_search - Function to search through a binary tree
 *
 * @tree: The Tree to search through
 * @value: The value to search for
 *
 * Return: Pointer to the node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	while (tree)
	{
		if (tree->n > value)
			tree = tree->left;
		else if (tree->n < value)
			tree = tree->right;
		else
			return ((bst_t *)tree);
	}
	return (NULL);
}
