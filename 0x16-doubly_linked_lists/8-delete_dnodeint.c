#include "lists.h"
#include "1-dlistint_len.c"
/**
 * delete_dnodeint_at_index - deletes a node at index of a dlinked list
 * @head: head of a dlinked list
 * @index: index of node to deltee
 * Return: 1 if successful; -1 if afiled
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hpointer;
	unsigned int len;
	unsigned int i;

	len = dlistint_len(*head);
	hpointer = *head;

	/* empty list */
	if (!*head)
		return (-1);

	/*delete first item, move head */
	if (index == 0)
	{
		if (hpointer->next)
			hpointer->next->prev = NULL;
		*head = hpointer->next;
		free(hpointer);
		return (1);
	}

	/*delete at end of the list */
	if (index == len - 1)
	{
		for (i = 0; i < index; i++)
			hpointer = hpointer->next;

		hpointer->prev->next = NULL;
		free(hpointer);
		return (1);
	}

	/*index out of range */
	if (index >= len)
	{
		return (-1);
	}

	/*delete node in middle of list */
	for (i = 0; i < index; i++)
	{
		hpointer = hpointer->next;
	}
	hpointer->prev->next = hpointer->next;
	hpointer->next->prev = hpointer->prev;
	free(hpointer);
	return (1);

}
