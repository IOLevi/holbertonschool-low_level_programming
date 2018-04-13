#include "lists.h"

/**
 * get_dnodeint_at_index - gets dlinked node at index
 * @head: head of the dlinked list
 * @index: index of the node
 * Return: address of the node; or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i;

	/*empty list*/
	if (!head)
		return (NULL);
	
	for (i = 0; i < index; i++)
	{
		/*index out of range*/
		if (i != index - 1 && head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}