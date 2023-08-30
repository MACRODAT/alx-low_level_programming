#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * Return: 1 if the system is little-endian, 0 if it's big-endian.
 */
int get_endianness(void)
{
	int nb;

	nb = 1;
	if (*(char *)&nb == 1)
		return (1);
	else
		return (0);
}
