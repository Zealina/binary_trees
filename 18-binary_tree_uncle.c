#include "binary_trees.h"

/**
 * binary_tree_uncle - Return binary node uncle
 * @node: Pointer to the node
 *
 * Return: The uncles node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *father, *g_father;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	father = node->parent;
	if (father->parent == NULL)
		return (NULL);
	g_father = father->parent;
	if (g_father->left == NULL || g_father->right == NULL)
		return (NULL);
	if (g_father->left == father)
		return (g_father->right);
	return (g_father->left);
}
