#include "binary_trees.h"
/**
 *binary_tree_is_leaf - Check if node is leaf
 *@node: Pointer to binary_tree_t node to check
 *Return: 1 on found leaf or 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	return (0);
	if (!node->left && !node->right)
		return (1);
return (0);
}
