#include "hash_tables.h"

/**
 * key_index - index of key
 * @key: key of key/value pair
 * @size: size of array of the hash table
 * Return: index where key/value pair should be stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int val;

	val = hash_djb2(key) % size;
	return (val);
}
