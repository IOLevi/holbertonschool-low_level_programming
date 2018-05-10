#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ki;
	hash_node_t *temp;

	ki = key_index(key, ht->size);

	if (ht->array[ki] == NULL)
		return (NULL);

	temp = ht->array[ki];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		else
			temp = temp->next;
	}

	return (NULL); /*didn't find a match*/
}
