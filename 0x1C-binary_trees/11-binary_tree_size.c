#include "binary_trees.h"
/**
 * bt_recursive - counts the size of binary tree
 * @tree: tree
 * @counter: counter for nodes
 * Return: counter of the given node
 */

size_t bt_recursive(const binary_tree_t *tree, size_t counter)
{
	if (tree)
	{
		counter += 1;
		counter = bt_recursive(tree->left, counter);
		counter = bt_recursive(tree->right, counter);
		return (counter);
	}
	return (counter);

}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node of the tree to measure the size
 * Return: the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter;

	counter = 0;
	if (!tree)
		return (0);
	return (bt_recursive(tree, counter));
}
