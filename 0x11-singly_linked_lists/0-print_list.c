#include "lists.h"

/**
 * print_list - prints all the elements of list_t list
 * @h: head of a list of type list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;


	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str); 
		else
			printf("[0] (nil)\n");
		n++;
		h = h->next; 
	}

	return (n);


}

