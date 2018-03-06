#include "lists.h"

/**
 * *add_nodeint - add a new node at teh beginning of a list
 * @head: pointer to the head of the list
 * @n: value to initialize the new node
 * Return: the address of the new element, or null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lev;

	lev = malloc(sizeof(listint_t));
	if (!lev)
		return (NULL);

	lev->n = n;

	if (*head == NULL)
	{
		lev->next = NULL;
		*head = lev;
		return (lev);
	}

	lev->next = (*head);
	*head = lev;
	return (lev);
}
