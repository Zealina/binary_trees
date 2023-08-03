#include "binary_trees.h"
/**
 * create_node - Create linked list node and add nodes
 * @list: The list for the node to be added
 * @node: The node to be added to tree
 *
 * Return: The new list
 */
my_list_t *create_node(my_list_t *list, const binary_tree_t *node)
{
	my_list_t *new, *trav;

	if (node == NULL)
		return (list);
	new = malloc(sizeof(my_list_t));
	if (new == NULL)
		exit(EXIT_FAILURE);
	new->node = node;
	new->next = NULL;
	if (list == NULL)
	{
		list = new;
		return (list);
	}
	trav = list;
	while (trav->next)
		trav = trav->next;
	trav->next = new;
	return (list);
}
/**
 * binary_tree_levelorder - Traverse a tree using level order traversal
 * @tree: The tree to be traversed
 * @func: The function to be performed
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	my_list_t *temp, *head;

	if (tree == NULL || func == NULL)
		return;
	head = create_node(NULL, tree);
	temp = head;
	while (temp != NULL)
	{
		func(temp->node->n);

		if (temp->node->left)
			head = create_node(head, temp->node->left);
		if (temp->node->right)
			head = create_node(head, temp->node->right);
		temp = temp->next;
	}
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
