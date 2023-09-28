#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed
 *
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 *
 * Return: The number of bits needed to flip to transform n into m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
