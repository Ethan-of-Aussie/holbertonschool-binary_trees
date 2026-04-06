#include "binary_trees.h"
/**
 *binary_tree_depth - Return the depth of the tree
 *@tree: Pointer to the root of a tree
 *Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int p;

	if (!tree)
	return (0);
	if (!tree->parent)
	return (0);
	else
		p = binary_tree_depth(tree->parent);

	return ((p) + 1);
}
