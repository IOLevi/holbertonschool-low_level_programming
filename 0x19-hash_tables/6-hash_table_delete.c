#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *temp;
	hash_node_t *next;

	if (!ht)
		return;

	for (i = 0; i < ht->size;i++)
	{
		temp = ht->array[i]; /*loop array*/

		while (temp)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
	}
	free(ht);
}
