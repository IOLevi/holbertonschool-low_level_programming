#include "lists.h"

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
