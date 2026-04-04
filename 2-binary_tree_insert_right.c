#include "binary_trees.h"
/**
 *binary_tree_insert_right - Create and insert right nodes
 *
 *@parent: Parent is pointer to struct node parent
 *@value: The value of n from struct
 *Return: NULL if failure, node if complete creation
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(*node));
binary_tree_t *tmp;

	if (!node)
		return (NULL);
	if (!parent)
	{
		free(node);
		return (NULL);
	}
	tmp = parent->right;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	parent->right = node;

	if (tmp != NULL)
	{
	node->right = tmp;
	tmp->parent = node;
	}

	return (node);
}
