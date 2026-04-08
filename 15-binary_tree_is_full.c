#include "binary_trees.h"
/**
 *full_recur - Checks if a binary tree is full recursively.
 *@tree: Pointer to the root node of the tree to check.
 *
 *Return: If tree is not full, 0. Otherwise, 1.
 */
int full_recur(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
	if ((tree->left != NULL && !tree->right) ||
		(!tree->left && tree->right != NULL) ||
		full_recur(tree->left) == 0 ||
		full_recur(tree->right) == 0)
	return (0);
	}
	return (1);
}
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: If tree is NULL or is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	return (0);
	return (full_recur(tree));
}
