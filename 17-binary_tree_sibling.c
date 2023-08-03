#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns the sibling of a node in a binary tree
 * @node: Pointer to the node
 *
 * Return: The pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *trav;

	if (node == NULL)
		return (NULL);
	trav = node->parent;
	if (trav == NULL)
		return (NULL);
	if (trav->left == NULL || trav->right == NULL)
		return (NULL);
	if (trav->left == node)
		return (trav->right);
	return (trav->left);
}
