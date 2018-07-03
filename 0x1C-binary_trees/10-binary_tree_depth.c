#include "binary_trees.h"


/**
 * binary_tree_depth - depth of a node in a binary tree
 * @node: pointer to the node to measure the depth
 * Return: if node is NULL, return 0; else depth
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t counter;

	counter = 0;

	if (!node)
		return (0);

	while (node)
	{
		if (node->parent != NULL)
		{
			counter++;
		}
		node = node->parent;
	}

	return (counter);
}
