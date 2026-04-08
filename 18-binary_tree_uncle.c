#include "binary_trees.h"
/**
 *binary_tree_t - Checks the Uncle in tree
 *@node: Pointer of nodes in the tree
 *Return: NULL if failure, returns the value of uncles on success
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	return (NULL);
	if (node->parent == node->parent->parent->left)
	return (node->parent->parent->right);
	return (node->parent->parent->left);
}
