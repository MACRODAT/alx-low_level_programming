#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 *
 * @b: b Binary string
 * Return: Converted decimal number or 0 if there is an invalid character
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, power = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	len--;

	while (len >= 0)
	{
		if (b[len] == '1')
			total += power;
		power *= 2;
		len--;
	}

	return (total);
}
