#include "lists.h"

/**
 * dlistint_len - returns length of a dlist
 * @h: head of the linked list
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
