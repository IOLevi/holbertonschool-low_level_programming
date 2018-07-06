#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: parent of the node
 * @value: value of the new node
 * Return: pointer to the new node, or null on failure or if the parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new;
	binary_tree_t *temp;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = new;

	}
	else
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
		temp->parent = new;
	}

	return (new);

}
