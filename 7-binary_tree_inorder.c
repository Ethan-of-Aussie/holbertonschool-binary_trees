#include "binary_trees.h"
/**
 *binary_tree_inorder - binary tree using in-order traversal
 *@tree: Pointer to root of a tree
 *@func: func points to a function to call nodes
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL)
	{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
	}
}
