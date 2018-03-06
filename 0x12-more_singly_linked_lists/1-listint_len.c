#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a linked list
 * Return: returns the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (h);

}
