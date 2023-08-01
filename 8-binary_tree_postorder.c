#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a tree in postorderly
 * @tree: The tree to be traversed
 * @func: The function to be performed on the tree
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
