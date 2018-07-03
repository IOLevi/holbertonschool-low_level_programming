#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value of the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* if parent already has a left-child, the new node must take its place, and the old
	 * left-child must be set as the left-child of the new node */
	binary_tree_t *new;
	binary_tree_t *temp;

	if (!parent)
		return NULL;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return NULL;

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = new;

	}
	else
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;	
		temp->parent = new;
	}

	return (new);


}
