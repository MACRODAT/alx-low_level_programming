#include "hash_tables.h"

/**
 * hash_table_set - insert element
 * @ht: table
 * @key: key
 * @value: value
 * Return: 1or0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nwp, *tempor;
	unsigned long int ind;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	tempor = ht->array[ind];

	if (tempor != NULL)
	{
		while (tempor)
		{
			if (strcmp(tempor->key, key) == 0)
			{
				tempor->value = strdup(value);
				return (1);
			}
			tempor = tempor->next;
		}
	}

	nwp = malloc(sizeof(hash_node_t));
	if (nwp == NULL)
		return (0);

	nwp->key = strdup(key);
	nwp->value = strdup(value);
	nwp->next = NULL;

	if (ht->array[ind] != NULL)
		nwp->next = ht->array[ind];

	ht->array[ind] = nwp;

	return (1);
}
