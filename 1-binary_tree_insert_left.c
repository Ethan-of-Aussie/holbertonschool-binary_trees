#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (value < parent->n)
	  {
	    node = node->left;
	    if (!node)
		return (node);
	  }
	return (NULL);
}
