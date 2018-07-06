#include "binary_trees.h"

/**
 * binary_tree_uncle - uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to uncle null if no node null if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *gp;

	if (!node)
		return (NULL);

	parent = node->parent;

	if (!parent)
		return (NULL);

	gp = parent->parent;

	if (!gp)
		return (NULL);
	if (gp->left == parent)
		return (gp->right);
	else
		return (gp->left);
}
