#include "binary_trees.h"
/**
 *per_recur - Checks if a binary tree is perfect recursively.
 *@tree: Pointer to the root node of the tree to check.
 *
 *Return: If tree is not perfect, 0. Otherwise, 1.
 */
int per_recur(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
	if ((tree->left != NULL && !tree->right) ||
	    (!tree->left && tree->right != NULL))
	return (0);
	}
	return (1);
}
/**
 *
 * Return: 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	return (per_recur(tree));
	
}
