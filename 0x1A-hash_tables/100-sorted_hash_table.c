#include "hash_tables.h"

/**
 * shash_table_create - new tb
 * @size: size
 *
 * Return: ptr
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newtable;
	unsigned long int i;

	newtable = malloc(sizeof(shash_table_t));
	if (newtable == NULL)
		return (NULL);
	newtable->size = size;
	newtable->shead = NULL;
	newtable->stail = NULL;
	newtable->array = malloc(sizeof(shash_node_t) * size);
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newtable->array[i] = NULL;
	}
	return (newtable);
}

/**
 * make_shash_node - mn
 * @key: ky
 * @value: dta
 *
 * Return: ptr
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *pls;

	pls = malloc(sizeof(shash_node_t));
	if (pls == NULL)
		return (NULL);
	pls->key = strdup(key);
	if (pls->key == NULL)
	{
		free(pls);
		return (NULL);
	}
	pls->value = strdup(value);
	if (pls->value == NULL)
	{
		free(pls->key);
		free(pls);
		return (NULL);
	}
	pls->next = pls->snext = pls->sprev = NULL;
	return (pls);
}

/**
 * add_to_sorted_list - ll
 * @table: ll
 * @node: node
 *
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tbl;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tbl = table->shead;
	while (tbl != NULL)
	{
		if (strcmp(node->key, tbl->key) < 0)
		{
			node->snext = tbl;
			node->sprev = tbl->sprev;
			tbl->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tbl = tbl->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - set keu val
 * @ht: tbl
 * @key: ky
 * @value: data
 *
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	char *nv;
	shash_node_t *pls, *tbl;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	ind = key_ind((const unsigned char *)key, ht->size);
	tbl = ht->array[ind];
	while (tbl != NULL)
	{
		if (strcmp(tbl->key, key) == 0)
		{
			nv = strdup(value);
			if (nv == NULL)
				return (0);
			free(tbl->value);
			tbl->value = nv;
			return (1);
		}
		tbl = tbl->next;
	}
	pls = make_shash_node(key, value);
	if (pls == NULL)
		return (0);
	pls->next = ht->array[ind];
	ht->array[ind] = pls;
	add_to_sorted_list(ht, pls);
	return (1);
}

/**
 * shash_table_get - reri
 * @ht: tb
 * @key: ky
 *
 * Return: vl
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind;
	shash_node_t *tbl;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	ind = key_ind((const unsigned char *)key, ht->size);
	tbl = ht->array[ind];
	while (tbl != NULL)
	{
		if (strcmp(tbl->key, key) == 0)
			return (tbl->value);
		tbl = tbl->next;
	}
	return (NULL);
}

/**
 * shash_table_print - tbl
 * @ht: hsh
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tbl;
	char flag = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tbl = ht->shead;
	while (tbl != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tbl->key, tbl->value);
		flag = 1;
		tbl = tbl->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - printer_rv
 * @ht: hsh
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tbl;
	char flag = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tbl = ht->stail;
	while (tbl != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tbl->key, tbl->value);
		flag = 1;
		tbl = tbl->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deleter
 * @ht: tbl
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
 