#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include "0-hash_table_create.c"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
