#include "binary_trees.h"

int bt(const binary_tree_t *tree, int val)
{
	int left, right;

	left = 0;
	right = 0;
	if (tree)
	{
		if ((tree->left && !tree->right) || (tree->right && !tree->left))
			return (0);
		left = bt(tree->left, val);
		right = bt(tree->right, val);
		if (left == 0 || right == 0)
			return (0);
		else
			return (1);
	}
	return (val);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree
 * Return: 0 if tree is NULL or not full; 1 if full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bt(tree, 1));


}
