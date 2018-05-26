#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *shead;
	listint_t *uhead;
	listint_t *ins;
	listint_t *temp;
	listint_t *pre;

	if (!list || !(*list))
		return;

	// initialize to shead pointing to first item, uhead is the second
	shead = *list;
	uhead = shead->next;
	//19, 12, 99, 71, 13, 52, 96, 73, 86, 7};
	//13 19 58 52 71 73 86 96 7

	//how about think of it like swapping
	//if you are moving an item into the sorted portion
	//you need to connect the thing before it and the thing after it from where it came from
	//so long as the item isn't staying in place (i.e. being added to the end)
	//can just add one more PRE pointer, since uhead was already the item after it
	//and you just connect PRE and uhead
	while (uhead)
	{
		ins = uhead;
		uhead = uhead->next;
		temp = shead;
		pre = ins->prev;
		while (temp && temp != ins)
		{
			//add to front
			if (ins->n <= shead->n)
			{
				//connect where it came from
				pre->next = uhead;
				if (uhead) //to prevent seg fault on the last swap when uhead is null
					uhead->prev = pre;

				ins->next = shead;
				shead->prev = ins;
				shead = ins;
				printf("adding %d in front of %d\n", ins->n, ins->next->n);
				print_list(shead);
				break;
			}
			//add to middle
			if (ins->n <= temp->n)
			{
				//connect gap
				pre->next = uhead;
				uhead->prev = pre;

				temp->prev->next = ins;
				ins->prev = temp->prev;
				ins->next = temp;
				temp->prev = ins;
				printf("adding %d inbetween %d and %d\n", ins->n, temp->prev->prev->n, temp->n);
				print_list(shead);
				break;

			}

			//larger than all the items in the list
			if (temp->next == ins)
			{
				printf("%d staying in place ahead of %d\n", ins->n, temp->n);
				print_list(shead);
				break;
			}
			temp = temp->next;
		}
	}
	*list = shead;
}
