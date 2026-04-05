#include "binary_trees.h"
/**
 *binary_tree_height - Return the heigh of the tree
 *@tree: Pointer to the root of a tree
 *Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int rh;
	int lh;

	if (!tree)
	return (-1);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return ((lh > rh ? lh : rh) + 1);
}
