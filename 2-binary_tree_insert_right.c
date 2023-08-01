#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert into the right child of binary tree
 * @parent: The parent of the node to be inserted
 * @value: The value of the node to be inserted
 * Return: The pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;
	parent->right = new;
	new->parent = parent;
	return (new);
}
