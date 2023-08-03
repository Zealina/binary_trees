#include "binary_trees.h"

/**
 * binary_trees_ancestors - find The lowest common ancestor between two nodes
 * @first: The first node
 * @second: The second node
 *
 * Return: Pointer to their lowest common ancestors
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	unsigned int f_height = 0, s_height = 0;
	binary_tree_t *f_trav, *s_trav;

	f_trav = first;
	s_trav = second;
	if (first == NULL || second == NULL)
		return (NULL);
	while (f_trav != NULL || s_trav != NULL) 
	{
		if (f_trav != NULL)
		{
			f_height++;
			f_trav = f_trav->parent;
		}
		if (s_trav != NULL)
		{
			s_height++;
			s_trav = s_trav->parent;
		}
	}
	while (abs
