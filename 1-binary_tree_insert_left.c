#include "binary_trees.h"
/**
 *binary_tree_insert_left - Create and insert left nodes
 *
 *@parent: Parent is pointer to struct node parent
 *@value: The value of n from struct
 *Return: NULL if failure, node if complete creation
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	tmp = parent->left;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	parent->left = node;

	if (tmp != NULL)
	{
	node->left = tmp;
	tmp->parent = node;
	}

	return (node);
}
