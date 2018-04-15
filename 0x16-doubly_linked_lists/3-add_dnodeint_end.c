#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlist
 * @head: head of the dlinked list
 * @n: value of the node
 * Return: address of new node; or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hpointer, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	hpointer = *head;

	/*empty list*/
	if (!hpointer)
	{
		*head = new;
		return (new);
	}

	/*add to the end */
	while (hpointer->next != NULL)
		hpointer = hpointer->next;

	hpointer->next = new;
	new->prev = hpointer;
	return (new);
}
