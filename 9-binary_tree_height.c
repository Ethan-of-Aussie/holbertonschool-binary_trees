#include "binary_trees.h"
/**
 *binary_tree_height - Return the heigh of the tree
 *@tree: Pointer to the root of a tree
 *Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rh;
	size_t lh;

	if (!tree)
	return (0);
	lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lh > rh ? lh : rh);
}
