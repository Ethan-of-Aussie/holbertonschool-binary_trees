#include "binary_trees.h"
/**
 *binary_tree_nodes - Return the nodes of the tree
 *@tree: Pointer to the root of a tree
 *Return: nodes count of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
	return (0);
	if (!tree->left && !tree->right)
	return (0);
	return (1 + (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right)));
}
