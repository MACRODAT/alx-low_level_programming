#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: hash table
 * @key: key to use to retrieve value
 * Return: value associated with key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *doc;

	if (key == NULL || ht == NULL)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	doc = ht->array[ind];

	if (!doc)
		return (NULL);

	while (strcmp(doc->key, key) != 0)
		doc = doc->next;

	if (doc == NULL)
		return (NULL);

	return (doc->value);
}
