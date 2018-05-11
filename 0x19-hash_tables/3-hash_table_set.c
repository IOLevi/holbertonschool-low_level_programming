#include "hash_tables.h"

/**
 * hash_table_set - put a key value pair in the hash table
 * @ht: the hash table
 * @key: key
 * @value: value
 * Return: 0 if fail, 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ki;
	hash_node_t *new;
	hash_node_t *temp;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	if (!value)
		return (0);

	ki = key_index((const unsigned char *)key, ht->size);
	/*check to see if key already exists, update value*/

	temp = ht->array[ki];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}


	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	/*initializes head*/
	if (ht->array[ki] == NULL)
	{
		ht->array[ki] = new;
		return (1);

	}
	temp = ht->array[ki]; /*assign head of linked list to temp */

	new->next = temp;
	ht->array[ki] = new;

	return (1);
}
