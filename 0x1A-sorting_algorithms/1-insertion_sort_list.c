#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *uhead;
	listint_t *ins;
	listint_t *temp;
	int counter;
	int sublist;

	/*check to make sure the list exists*/
	if (!list)
		return;

	/*check to make sure the first item is NOT null*/
	if(!(*list))
		return;

	/*uhead is a pointer to the unsorted portion (starts at 2nd element)*/
	uhead = (*list)->next;

	print_list(*list);
	sublist = 1;
	while(uhead)
	{
		ins = uhead;
		uhead = uhead->next;

		temp = *list;
		counter = 0;
		while(temp && temp != ins) //enote check
		{
			/*found spot to insert*/
			if (ins->n <= temp->n)
			{
				/*front swap*/
				if (counter == 0)
				{
					*list = ins;
					if (counter + 1 == sublist)
						temp->next = uhead;
					ins->next = temp;
					temp->prev = ins;
					break;
				}	
				else
				{
					if (counter + 1 == sublist)
						temp->next = uhead;
					temp->prev->next = ins;
					ins->prev = temp->prev;
					ins->next = temp;
					temp->prev = ins;
					break;
				}
			}	
			temp = temp->next;
			counter++;
		}
		sublist++;	
	}
}
