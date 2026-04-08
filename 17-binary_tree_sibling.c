#include "binary_trees.h"
/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: Pointer to node in struct
 *Return: NULL or a successful sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	return (NULL);

	if (node->parent->left == node)
	return (node->parent->right);
	return (node->parent->left);
}
