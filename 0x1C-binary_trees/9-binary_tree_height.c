#include "binary_trees.h"

/**
 * btq - recursion of the bt
 * @tree: tree
 * @counter: counter
 * Return: the counter
 */
size_t btq(const binary_tree_t *tree, size_t counter)
{
	size_t counterr, counterl;

	counterr = 0;
	counterl = 0;
	if (tree)
	{
		counter++;
		counterl = bt(tree->left, counter);
		counterr = bt(tree->right, counter);
		if (counterl >= counterr)
			return (counterl);
		else
			return (counterr);
	}
	return (counter);


}

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: pointer to the root node of a tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter;

	counter = -1;
	if (!tree)
		return (0);

	counter = bt(tree, counter);
	return (counter);
}
