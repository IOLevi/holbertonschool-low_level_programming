#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of a listint t linked list
 * @head: head of the linked list
 * @index: index of node to delete
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptrtodelete;
	unsigned int i;

	if (!*head)
		return (-1);

	ptr = *head;

	/*deletefrommiddle*/

	for (i = 0; i < index - 1; i++)
	{
		hptr = hptr->next;
		if (!hprt)
			return (-1);
	}
	ptrtodelete = hptr->next;
	hptr = ptrtodelete->next;
	free(ptrtodelete);

	return (1);
}
