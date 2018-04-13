#include "lists.h"

/**
 * add_dnodeint - add a node to beginning of the list
 * @head: head of the linked list
 * @n: value of node
 * Return: Address of new node; or null if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *hpointer, *new;

        new = malloc(sizeof(dlistint_t)
	if (!new)
        	return (NULL);
	new->n = n;
	new->next = NULL;
	new->previous = NULL;
	hpointer = *head;

	/* empty list */
	if (!hpointer)
	{
		*head = new;
		return (new);
	}
	
	/* add to the beginning of the list */
	hpointer->previous = new;
	new->next = hpointer;
	*head = new;
	return (new);
}