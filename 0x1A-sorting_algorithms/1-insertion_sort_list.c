#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *shead;
	listint_t *uhead;
	listint_t *ins;
	listint_t *temp;

	if (!list || !(*list))
		return;

	// sever the two lists
	shead = *list;
	uhead = shead->next;
	shead->next = NULL;

	while (uhead)
	{
		ins = uhead;
		uhead = uhead->next;
		temp = shead;
		while (temp)
		{
			//add to front
			if (ins->n <= temp->n && ins->n <= shead->n)
			{
				ins->next = shead;
				shead->prev = ins;
				shead = ins;
				break;
			}
			//add to middle
			if (ins->n <= temp->n)
			{
				temp->prev->next = ins;
				ins->prev = temp->prev;
				ins->next = temp;
				temp->prev = ins;
				break;

			}

			//larger than all the items in the list
			if (temp->next == NULL)
			{
				temp->next = ins;
				ins->prev = temp;
				ins->next = NULL;
				break;
			}
			temp = temp->next;
		}
	}
	*list = shead;
}
