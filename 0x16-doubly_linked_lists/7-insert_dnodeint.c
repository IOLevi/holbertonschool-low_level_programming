#include "lists.h"
#include "1-dlistint_len.c"
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
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	hpointer = *h;

	/*empty list or add to beginning*/
	if (!hpointer || idx == 0)
		return (add_dnodeint(h, n)); /*h because it needs to update head*/

	len = dlistint_len(hpointer);

	/*idx at end of list*/
	if (len == idx)
	{
		return (add_dnodeint_end(h, n));
	}

	/*idx out of range */
	if (idx > len)
	{
		return (NULL);
	}

	/*add node to the middle*/
	for (i = 0; i < idx; i++)
	{
		hpointer = hpointer->next;
	}

	new->prev = hpointer->prev;
	new->next = hpointer;
	hpointer->prev->next = new;
	hpointer->prev = new;

	return (new);
}
