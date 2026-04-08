#include "binary_trees.h"
/**
 *binary_tree_height - Return the height of the tree
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
/**
 *binary_tree_is_perfect - Check if tree is perfect
 *@tree: Pointer to the root of the tree
 *Return: The return of both subtrees, 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
