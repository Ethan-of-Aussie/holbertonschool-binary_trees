#include "binary_trees.h"
/**
 *binary_tree_preorder - binary tree using pre-order traversal
 *@tree: Pointer to root of a tree
 *@func: func points to a function to call nodes
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	}
}
