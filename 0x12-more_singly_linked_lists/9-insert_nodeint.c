#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: index of the lsit where the node should be added
 * @n: number to initialize node with
 * Return: the address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hptr, *tptr, *lev;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	lev = malloc(sizeof(listint_t));
	if (!lev)
		return (NULL);

	lev->n = n;
	lev->next = NULL;
	hptr = *head;

	/*empty list */
	if (hptr == NULL)
	{
		*head = lev;
		lev->next = NULL;
		return (lev);
	}

	/*addbeginning*/
	if (idx == 0)
	{
		*head = lev;
		(*head)->next = hptr;
		return (lev);
	}

	/*insertmiddleORend*/
	for (i = 0; i < idx - 1; i++)
	{
		hptr = hptr->next;
		if (!hptr)
			return (NULL);
	}
	tptr = hptr->next;


	hptr->next = lev;
	lev->next = tptr;
	return (lev);
}
