#include "binary_trees.h"

/**
 * binary_tree_node - Create a new binary tree
 * @parent: The parent/root node
 * @value: The value of the node
 * Return: The new node created or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	if (parent == NULL)
		new->parent = NULL;
	else
		new->parent = parent;
	return (new);
}
