#include "main.h"
#include <stdio.h>

/**
 * print_binary - Print the binary representation of a decimal number.
 *
 * @decimalNumber: Decimal number to be printed in binary
 */
void print_binary(unsigned long int decimalNumber)
{
	int sh;
	unsigned long int tmp;

	if (!decimalNumber)
	{
		printf("0");
		return;
	}

	for (tmp = decimalNumber, sh = 0; (tmp >>= 1) > 0; sh++)
		;

	for (; sh >= 0; sh--)
	{
		if ((decimalNumber >> sh) & 1)
			printf("1");
		else
			printf("0");
	}
}
