#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number psaassed by psaointer
 * @index: index psaosition to change, starting from 0
 * Return: 1 good, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int psa;

	if (index > 64)
		return (-1);

	for (psa = 1; index > 0; index--, psa *= 2)
		;
	*n += psa;

	return (1);
}
