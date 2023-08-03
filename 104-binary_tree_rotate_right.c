#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotate tree rightwise
 * @tree: The not rotated tree
 *
 * Return: Pointer to new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *old_root;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	old_root = tree;
	tree = old_root->left;
	tree->parent = old_root->parent;

	old_root->left = tree->right;
	if (old_root->left)
		old_root->left->parent = old_root;
	tree->right = old_root;
	old_root->parent = tree;
	return (tree);
}
