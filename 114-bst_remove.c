#include "binary_trees.h"

/**
 * bst_remove - Remove a node from a Binary Search Tree
 * @root: Pointer to the root node of the tree
 * @value: Value to remove from the tree
 *
 * Return: Pointer to the new root node of the tree after removal
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (!root->right)
		{
			temp = root->left;
			free(root);
			return (temp);
		}

		temp = binary_tree_min(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
/**
 * binary_tree_min - Find the node with the minimum value in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Pointer to the node with the minimum value, or NULL if tree is NULL
 */
bst_t *binary_tree_min(const bst_t *tree)
{
	if (!tree)
		return NULL;

	while (tree->left)
		tree = tree->left;

	return (bst_t *)tree;
}
