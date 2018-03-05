#include "lists.h"

/**
 * pop_listint - deletes head node of linked list and returns the data
 * @head: head of the linked list
 * Return: the n from the node
 */
int pop_listint(listint_t **head)
{
	listint_t *hptr; 
	listint_t *nptr;
	int c = 0;

	if (*head == NULL)
		return (0);

	nptr = *head->next; 
	hptr = *head;

	c = hptr->n;
	free(hptr);
	*head = nptr;
	return (c);

}
