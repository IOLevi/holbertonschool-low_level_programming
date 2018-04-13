#include "lists.h"

/**
 * print_dlistint - prints all the elemnts of a dlist_t
 * @h: head of the doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

		counter = 0;    
	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}