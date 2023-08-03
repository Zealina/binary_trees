#include "binary_trees.h"
/**
 * binary_tree_levelorder - Traverse a tree using level order traversal
 * @tree: The tree to be traversed
 * @func: The function to be performed
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
