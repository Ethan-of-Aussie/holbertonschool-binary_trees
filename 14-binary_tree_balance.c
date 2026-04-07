#include "binary_trees.h"
size_t height(const binary_tree_t *tree)
{
    size_t lh, rh;

    if (!tree)
        return (0);

    lh = tree->left ? 1 + height(tree->left) : 0;
    rh = tree->right ? 1 + height(tree->right) : 0;

    return (lh > rh ? lh : rh);
}

int binary_tree_balance(const binary_tree_t *tree)
{

  	if (!tree)
	return (0);
	
	return (height(tree->left) - height(tree->right));
}
