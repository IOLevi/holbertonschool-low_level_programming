#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the dlinked list
 * @idx: position to add the node
 * @n: data to add
 * Return: address of the node; NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hpointer, *new;
	size_t len;

	new = malloc(sizeof(dlistint_t));
	new->previous = NULL;
	new->next = NULL;
	new->n = n;

	hpointer =*h;

	/*empty list*/
	if (!hpointer)
		return(add_dnodeint(&hpointer));

	len = dlistint_len(hpointer);
	
	if (len - 1 == idx)
	{
		return(add_dnodeint_end(&hpointer));
	}
	
	if (idx > len - 1)
	{

	}
}