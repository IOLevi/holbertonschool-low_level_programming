#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a linked list
 * @head:  pointer to a pointer to a list_t node
 * @str: string value of a node
 * Return: address of the new element, or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lev; 
	int i = 0;

	lev = malloc(sizeof(list_t));
	if (!lev)
	{
		return (NULL);
	}

	lev->str = strdup(str);
	if (lev->str == NULL)
	{
		free(lev);
		return (NULL);

	}

	while (lev->str[i] != 0)
		i++;
	lev->len = i;
	lev->next = *head;
	(*head) = lev;

	return (lev); 

}
