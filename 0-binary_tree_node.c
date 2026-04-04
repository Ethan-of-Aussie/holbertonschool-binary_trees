#include "binary_trees.h"
/**
 *binary_tree_node - Creates binary tree node
 *
 *@parent: Parent is pointer to struct node parent
 *@value: The value of n from struct
 *Return: NULL if failure, node if complete creation
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(*node));

	if (!node)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (node != NULL)
	return (node);

return (NULL);
}
