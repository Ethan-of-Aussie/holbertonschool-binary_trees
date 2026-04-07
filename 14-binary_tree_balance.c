#include "binary_trees.h"
/**
 *height - Return the height of the tree
 *@tree: Pointer to the root of a tree
 *Return: Height of the tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (-1);

	lh = tree->left ? 1 + height(tree->left) : 0;
	rh = tree->right ? 1 + height(tree->right) : 0;

	return (lh > rh ? lh : rh);
}
/**
 *binary_tree_balance - Return the balance of the tree
 *@tree: Pointer to the root of a tree
 *Return: Balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{

  	if (!tree)
	return (0);

	return (height(tree->left) - height(tree->right));
}
