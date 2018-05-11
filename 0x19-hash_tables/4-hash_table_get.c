#include "hash_tables.h"

/**
 * hash_table_get - get a value from key
 * @ht: hash table
 * @key: key
 * Return: string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ki;
	hash_node_t *temp;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);

	ki = key_index((const unsigned char *)key, ht->size);

	if (ht->array[ki] == NULL)
		return (NULL);

	temp = ht->array[ki];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL); /*didn't find a match*/
}
