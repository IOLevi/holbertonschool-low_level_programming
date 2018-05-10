#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *temp;
	int flag;

	flag = 0;

	if (!ht)
		return;

	
	printf("{\n");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while(temp)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}

	}
	printf("}\n");
}
