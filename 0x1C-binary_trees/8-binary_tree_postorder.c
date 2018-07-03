#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree using post-order traversal
 * @tree: root
 * @func: function to use
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*post order left->right->root*/

	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
