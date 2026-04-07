#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh;
	int rh;

  	if (!tree)
	return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (1 + (lh > rh ? lh : rh));
}
