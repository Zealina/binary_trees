#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotate tree leftwise
 * @tree: The not rotated tree
 *
 * Return: Pointer to new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *old_root;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	old_root = tree;
	tree = old_root->right;
	tree->parent = old_root->parent;

	old_root->right = tree->left;
	if (old_root->parent)
		old_root->right->parent = old_root;
	tree->left = old_root;
	old_root->parent = tree;
	return (tree);
}
