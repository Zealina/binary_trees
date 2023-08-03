#include "binary_trees.h"

/**
 * binary_trees_ancestor - find The lowest common ancestor between two nodes
 * @first: The first node
 * @second: The second node
 *
 * Return: Pointer to their lowest common ancestors
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second
)
{
	int f_depth = 0, s_depth = 0, d_diff;
	const binary_tree_t *f_trav, *s_trav, *mov_up, *n_mov_up;

	f_trav = first;
	s_trav = second;
	if (first == NULL || second == NULL)
		return (NULL);
	while (f_trav || s_trav)
	{
		if (f_trav)
		{
			f_depth++;
			f_trav = f_trav->parent;
		}
		if (s_trav)
		{
			s_depth++;
			s_trav = s_trav->parent;
		}
	}
	mov_up = f_depth > s_depth ? first : second;
	n_mov_up = mov_up != first ? first : second;
	d_diff = abs(f_depth - s_depth);
	while (d_diff > 0 && mov_up)
	{
		d_diff--;
		mov_up = mov_up->parent;
	}

	while (n_mov_up != mov_up && mov_up && n_mov_up)
	{
		mov_up = mov_up->parent;
		n_mov_up = n_mov_up->parent;
	}
	if (mov_up == n_mov_up && mov_up)
		return ((binary_tree_t *)(mov_up));
	return (NULL);
}
