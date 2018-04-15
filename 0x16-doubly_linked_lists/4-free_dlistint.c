#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: head of dlinked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hpointer;

	if (!head)
		return;

	hpointer = head;

	while(head)
	{
		hpointer = head->next;
		free(head);
		head = hpointer;
	}
}
