#include "hash_tables.h"

/**
 * hash_table_create - aergaegea
 * @size: gragrea
 * Return: gruehgera
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);

	new->size = size;

	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
