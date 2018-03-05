#include "lists.h"

/**
 * *add_nodeint_end - adds a node to the end of a list
 * @head: head of a list
 * @n: number to initialize the struct with
 * Return: the new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lev;
	listint_t *e;

	lev = malloc(sizeof(listint_t));
	if (!lev)
		return(NULL);

	lev->n = n;
	
	if (*head == NULL)
	{
		*head = lev;
		lev->next = NULL;
	}
	
	e = *head;
	while (e->next)
	{
		e = e->next;
	}

	e->next = lev; 
	lev->next = NULL; 

	return (lev);
	
}
