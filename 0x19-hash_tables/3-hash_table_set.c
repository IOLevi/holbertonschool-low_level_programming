#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ki;
	hash_node_t *new;
	hash_node_t *temp;

	ki = key_index(key, ht->size);
	
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
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (1);
}
