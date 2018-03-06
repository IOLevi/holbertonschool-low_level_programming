#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of a listint t linked list
 * @head: head of the linked list
 * @index: index of node to delete
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hptr, *nptr, *ptrtodelete;
	unsigned int i;

	if (!head)
		return (-1);

	if (!*head)
		return (-1);

	hptr = *head;
	nptr = (*head)->next;

	/* delete beginning*/
	if (index == 0)
	{
		free(hptr);
		*head = nptr;
		return (1);
	}

	/*deletefrommiddle*/
	for (i = 0; i < index - 1; i++)
	{
		hptr = hptr->next;
		if (!hptr)
			return (-1);
	}
	ptrtodelete = hptr->next;
	nptr = ptrtodelete->next;
	hptr->next = nptr;
	free(ptrtodelete);
	return (1);
}
