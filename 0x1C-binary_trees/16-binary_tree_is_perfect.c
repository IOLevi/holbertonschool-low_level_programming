#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of tree to check
 * Return: 0 if NULL or imperfect; 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	else
		return (0);
}
