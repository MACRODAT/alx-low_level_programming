#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - mem
 * @b: nbr
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
