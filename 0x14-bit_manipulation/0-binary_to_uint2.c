#include "main.h"
#include <stdio.h>
#include "math.h"

typedef unsigned int ui; 

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 *
 * @b: b Binary string
 * Return: Converted decimal number or 0 if there is an invalid character
 */
unsigned int binary_to_uint2(const char *b)
{
	ui sum = 0;
	ui len = 0;
	char *rev;

	while (*b)
	{
		if (len > 0)
			sum *= 2;
		if (*b == '0' || *b == '1')
		{	
			if (*b == '1')
				sum += 1;
		}	
		else
			return (0);
		b++;
		len++;
	}
	return (sum);
}
