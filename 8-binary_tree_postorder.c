#include "binary_trees.h"
/**
 *binary_tree_postorder - binary tree using post-order traversal
 *@tree: Pointer to root of a tree
 *@func: func points to a function to call nodes
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL)
	{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
	}
}
