#include "binary_trees.h"

/**
 * array_to_bst - Convert an array into a binary search tree
 * @array: Pointer to the array
 * @size: The size of the array
 *
 * Return: The made BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
