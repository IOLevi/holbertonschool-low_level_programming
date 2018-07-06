#include "binary_trees.h"
/**
 * bt_recursive - counts the leaves of binary tree
 * @tree: tree
 * @leaf: leaf for leaf nodes
 * Return: number of leaf
 */

size_t bt_recursive(const binary_tree_t *tree, size_t leaf)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			leaf++;
		leaf = bt_recursive(tree->left, leaf);
		leaf = bt_recursive(tree->right, leaf);
		return (leaf);
	}
	return (leaf);
}

/**
 * binary_tree_leaves - counts leaves of a binary tree
 * @tree: root node of the tree to measure the size
 * Return: number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;

	leaf = 0;
	if (!tree)
		return (0);

	return (bt_recursive(tree, leaf));
}
