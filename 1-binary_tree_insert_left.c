#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert into the binary tree
 * @parent: The parent of the node to be inserted
 * @value: The value of the node to be inserted
 * Return: The pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = NULL;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		new->left = NULL;
	parent->left = new;
	new->parent = parent;
	return (new);
}
