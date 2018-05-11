#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	int i;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t*) * size); // this may need to be pointer
	if (!new->array)
		return (NULL);
	
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return new;
}
