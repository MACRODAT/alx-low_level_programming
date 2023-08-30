#include "main.h"
#include <stdio.h>
/**
 * get_bit - value of a bit at index
 * @n: number
 * @index: index starting from 0, of the bit wanted
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hl;

	if (index > 64)
		return (-1);

	hl = n >> index;

	return (hl & 1);
}
