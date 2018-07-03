#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: pointer to the root node of a tree to measure the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter;

	counter = 0;
	if (!tree)
		return (0);

	while (tree->right || tree->left)
	{
		counter++;
		if (tree->left)
			tree = tree->left;
		else
			tree = tree->right;
	}

	return (counter);
}
