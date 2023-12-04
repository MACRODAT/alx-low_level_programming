#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include "0-hash_table_create.c"
#include "3-hash_table_set2.c"
#include "2-key_index.c"
#include "1-djb2.c"
#include "5-hash_table_print.c"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hello", "this is the secret key");
	hash_table_set(ht, "built", "this is not the secret key");
	hash_table_print(ht);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
