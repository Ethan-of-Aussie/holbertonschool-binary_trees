#include "binary_trees.h"
/**
 *binary_tree_is_root - Check if node is root
 *@node: Pointer to binary_tree_t node to check
 *Return: 1 on found root or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	return (0);
	if (node->parent == NULL)
		return (1);
return (0);
}
