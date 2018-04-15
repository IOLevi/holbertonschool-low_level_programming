#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of dlist
 * @head: head of the dlinked list
 * Return: the sum of the data; 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

