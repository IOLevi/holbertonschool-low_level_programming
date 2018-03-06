#include "lists.h"

/**
 * sum_listint - returns the sum of all the data n of a linkedlist
 * @head: head of the linked list
 * Return: the sum, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *hptr;
	int sum = 0;

	hptr = head;

	while (hptr)
	{
		sum += hptr->n;
		hptr = hptr->next;
	}

	return (sum);
}
