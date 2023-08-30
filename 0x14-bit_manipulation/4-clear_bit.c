#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Clears a bit at a given index in an unsigned long integer.
 *
 * @n: A pointer to the unsigned long integer
 * @index: The index of the bit to be cleared
 *
 * Return: On success, returns 1. On failure (index > 64), returns -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
