#include "hash_tables.h"

/**
 * hash_table_print - printer
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *can;
	int flag;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, flag = 0; i < ht->size; i++)
	{
		can = ht->array[i];
		if (can != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", can->key, can->value);
			while ((can = can->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", can->key, can->value);
			}

			flag = 1;
		}
	}

	printf("}");
	printf("\n");
}
