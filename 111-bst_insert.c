#include "binary_trees.h"
#include <stdio.h>
/**
 * bst_insert - Insert into a binary search tree
 * @tree: The tree to be inserted into
 * @value: The value to be inserted
 *
 * Return: Pointer to the created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *parent, *current;

	if (!tree)
		return (NULL);
	new = (bst_t *)binary_tree_node(NULL, value);
	if (!new)
		return (NULL);
	if (!*tree)
	{
		*tree = new;
		return (new);
	}
	current = *tree;
	parent = NULL;
	while (current)
	{
		parent = current;
		if (current->n == value)
		{
			free(new);
			return (NULL);
		}
		if (current->n > value)
			current = (current)->left;
		else
			current = (current)->right;
	}
	if (value < parent->n)
		parent->left = new;
	else
		parent->right = new;
	new->parent = parent;
	return (new);
}
