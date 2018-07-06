#include "binary_trees.h"

/**
 * bth - recursion to measure the balance factor of a binary tree
 * @tree: pointer to node
 * @counter: counter
 * Return: balance factor
 */
int bth(const binary_tree_t *tree, int counter)
{
	int counterr, counterl;

	counterr = 0;
	counterl = 0;
	if (tree)
	{
		counter++;
		counterl = bth(tree->left, counter);
		counterr = bth(tree->right, counter);
		if (counterl >= counterr)
			return (counterl);
		else
			return (counterr);
	}
	return (counter);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: the balance factor; 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bth(tree->left, 0) - bth(tree->right, 0));
}
