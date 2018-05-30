#include "sort.h"

/**
 * insertion_sort_list - sorts a double linked link with insertion
 * @list: double pointer to dlist
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *shead;
	listint_t *uhead;
	listint_t *ins;
	listint_t *temp;
	listint_t *pre;

	if (!list || !(*list))
		return;

	shead = *list;
	uhead = shead->next;

	while (uhead)
	{
		ins = uhead;
		uhead = uhead->next;
		pre = ins->prev;

		while (pre && pre->n > ins->n)
		{
			pre->next = ins->next;
			if (ins->next)
				ins->next->prev = pre;

			ins->next = pre;
			if (pre->prev)
				pre->prev->next = ins;
			ins->prev = pre->prev;
			pre->prev = ins;
			pre = ins->prev;

			if (pre == NULL)
				*list = ins;
			print_list(*list);
		}

	}
}
