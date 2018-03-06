#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_T linked list
 * @head: head of the linked list
 * @index: index of the node, starting at 0
 * Return: the nth ode, or NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *hptr;


	if (!head)
		return (NULL);

	hptr = head;
	for (i = 0; i < index; i++)
	{
		hptr = hptr->next;
	}

	return (hptr);

}
