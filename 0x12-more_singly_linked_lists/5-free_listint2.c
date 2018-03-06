#include "lists.h"

/**
 * free_listint2 - free a listint_t list and sets head to NULL
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *hprt;

	hptr = *head;

	while (hprt)
	{
		ptr = hprt->next;
		free(hprt);
		hprt = ptr;
	}

	*head = NULL;

}
