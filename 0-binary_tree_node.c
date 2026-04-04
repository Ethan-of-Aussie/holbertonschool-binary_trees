#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(*node));

	node->parent = parent;
	node->n = value;

	if (node != NULL)
	return (node);

return (NULL);
}
