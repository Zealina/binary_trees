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
 * binary_tree_is_complete - Traverse a tree using level order traversal
 *	check if complete
 * @tree: The tree to be traversed
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	my_list_t *temp, *head;
	size_t count = 0, size;

	if (tree == NULL)
		return (0);
	head = create_node(NULL, tree);
	temp = head;
	while (temp != NULL)
	{
		if (temp->node == NULL)
			break;
		count++;
		create_node(head, temp->node->left);
		create_node(head, temp->node->right);
		temp = temp->next;
	}
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	size = binary_tree_size(tree);
	return (count == size);
}
/**
 * binary_tree_size - Get the size of the binary tree
 * @tree: The parent node to calculate from
 * Return: The size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}
