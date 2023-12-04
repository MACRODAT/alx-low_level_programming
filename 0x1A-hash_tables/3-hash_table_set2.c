#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of the key
 * Return: somthing
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *ref;
	unsigned long ind;

	if (!ht | !key || !value)
		return (0);

	ind = key_index((const unsigned char *) key, ht->size);
	ref = ht->array[ind];
	if (ref)
	{
		while (ref)
		{
			if (strcmp(ref->key, key) == 0)
			{
				ref->value = strdup(value);
				return (1);
			}
			ref = ref->next;
		}
	}
	node = malloc(sizeof(hash_node_t *));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ref;
	ht->array[ind] = node;

	return (1);
}
